# include <unistd.h>
# include <stdio.h>

int main(void) {

    const char *msg = "Ola, mundo!\n";

    // Usamos chamada de sistema "write" que é para escrever na tela "Ola, mundo".
    write(STDOUT_FILENO, msg, 13);
    return 0;

}
