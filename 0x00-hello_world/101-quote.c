#include <unistd.h>
#include <sys/syscall.h>

#define STDERR_FILENO 2

int main() {
    const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    syscall(SYS_write, STDERR_FILENO, message, sizeof(message) - 1);
    return 1;
}
