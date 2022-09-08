# include <unistd.h>
# include <stdio.h>

int main(void) {

    const char *msg = "Ola, mundo!\n";

    write(STDOUT_FILENO, msg, 13);
    return 0;

}