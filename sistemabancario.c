#include <stdio.h>
#include <unistd.h> // Para usar a função sleep
#include <ncurses.h> // Para detectar as teclas do teclado 

int main() {
    
    initscr(); // Incia a biblioteca a "ncurses.h"
    timeout(0); // Configura o tempo de espera para zero
    int sinal = 0; // 0 = Não aciona o sinal de pedestres, 1 = incia o sinal de pedestres
    sleep(2); // Pausa o código por 2 segundos

    while (1) { // Cria um loop infinito
        
        int tecla = getch(); // Lê uma tecla
        if (tecla == 's'){
            sinal = 1; // O sinal é ativado quando o usuário pressiona a tecla "s" do teclado
        }

        if (sinal){ // Se a tecla "s" for pressionada o sinal de pedestres será ativado quando os sinais da rua Alfa e Bravo ficarem vermelhos
            printf("Rua Alfa - \33[32mSinal: Verde \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n"); // Todos os "printf" têm padrão Ansi para imprimir com cor
            printf("Pedestres - \33[31mSinal: Vermelho \33[m\n");
            sleep(15); // Pausa o código por 15 segundos
            printf("Rua Alfa - \33[33mSinal: Amarelo \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            sleep(2); // Pausa o código por 2 segundos
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            sleep(1); // Pausa o código por 1 segundo
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            printf("Pedestres - \33[32mSinal: Verde \33[m\n");
            sleep(5); // Pausa o código por 5 segundos
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            printf("Pedestres - \33[31mSinal: Vermelho Piscando \33[m\n");
            sleep(5); // Pausa o código por 5 segundos
            
        }else{ // caso a tecla 's' não seja pressionada o sinal de pedestres não sera ativado
            printf("Rua Alfa - \33[32mSinal: Verde \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            printf("Pedestres - \33[31mSinal: Vermelho \33[m\n");
            sleep(15); // Pausa o código por 15 segundos
            printf("Rua Alfa - \33[33mSinal: Amarelo \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            sleep(2); // Pausa o código por 2 segundos
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            sleep(1); // Pausa o código por 1 segundo
        }
        
        if (sinal){ // Se a tecla "s" for pressionada o sinal de pedestres será ativado quando os sinais da rua Alfa e Bravo ficarem vermelhos
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[32mSinal: Verde \33[m\n");
            sleep(10); // Pausa o código por 10 segundos
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[33mSinal: Amarelo \33[m\n");
            sleep(2); // Pausa o código por 2 segundos
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            sleep(1); // Pausa o código por 1 segundo
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            printf("Pedestres - \33[32mSinal: Verde \33[m\n");
            sleep(5); // Pausa o código por 5 segundos
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            printf("Pedestres - \33[31mSinal: Vermelho Piscando \33[m\n");
            sleep(5); // Pausa o código por 5 segundos
        
        }else{ // caso a tecla 's' não seja pressionada o sinal de pedestres não sera ativado
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[32mSinal: Verde \33[m\n");
            sleep(10); // Pausa o código por 10 segundos
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[33mSinal: Amarelo \33[m\n");
            sleep(2); // Pausa o código por 2 segundos
            printf("Rua Alfa - \33[31mSinal: Vermelho \33[m\n");
            printf("Rua Bravo - \33[31mSinal: Vermelho \33[m\n");
            sleep(1); // Pausa o código por 1 segundo

        }
    }

    endwin(); // Finaliza a biblioteca "ncurses.h"

    return 0;
}

