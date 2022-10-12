# include <unistd.h>
# include <stdio.h>

int main(void) {

    const char *msg = "Ola, mundo!\n";

    // Usamos chamada de sistema "write" que é para escrive na tela "Olá moneda".
    write(STDOUT_FILENO, msg, 13);
    return 0;

}