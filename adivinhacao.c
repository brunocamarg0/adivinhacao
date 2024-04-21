                    #include <stdio.h> //biblioteca para imprimir printf 
                    #include <stdlib.h>
                    #include <time.h>
                    int main() {

                        //imprime cabecalho do nosso jogo
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

                    int segundos = time(0);// time é a funcção no qual a gente precisa de um parametro de numeros, no caso esse aparametro é o tempo ou seja os segundos
                    srand(segundos);//sementes que vai passar numeros diferente para a maquina 

                    
                    int numerogrande = rand();// nuemro randômico que o computador te da seja em milhoes ou dezenas

                    int numerosecreto = numerogrande % 100;
                    int chute;
                    int ganhou = 0;
                    int tentativas = 1;
                    double  pontos = 1000;

                    int numerodetentativas;

                    int acertou = 0;
                    int nivel;
                    printf("Qual o nível de dificuldade?\n");
                    printf("(1) Facil (2)medio (3)dificil\n\n");
                    printf("Escolha:");
                    scanf("%d", &nivel);
                    //enquanto o jogador não ganhou 

                    switch (nivel)
                    {
                    case 1:
                        numerodetentativas = 20;
                    break;
                    case 2:
                        numerodetentativas = 15;
                    break;
                    default:
                        numerodetentativas = 6;
                    break;
                    }

                    for(int i =1; i <= numerodetentativas; i++){
                    printf("Tentativa %d\n", tentativas);
                    printf("Qual eh seu chute?\n");
                    scanf("%d", &chute); //scanf pegar do teclado e guardar na variavel chute
                        
                        printf("Seu chute foi %d\n", chute);
                        if (chute < 0){
                            printf("Voce nao pode chutar numeros negativos!!\n");
                            continue;
                        }

                    int acertou = (chute == numerosecreto);
                    int maior = chute > numerosecreto;
                        if (acertou){

                        break;

                        int maior = chute > numerosecreto;
                        }else if (maior){
                                printf("Seu chute foi maior que o numero secreto.\n");
                        }else{
                                printf("Seu chute foi menor que o numero secreto.\n");
                        }        
                    
                        tentativas++;

                        double pontosperdidos = abs (chute - numerosecreto) / (double)2 ;//2.0 para conta funcionar como conta decimal, o compilador compila da direita para esquerda então ele precisa pegar esse primeiro valor que no caso era 2 que se tornou 2.0
                        if (pontosperdidos <0){
                            pontosperdidos = pontosperdidos * -1; //esse vezes -1 seria o a mudança do sinal que tornaria eçe positivo, pq não queremos numero negativos
                        }
                        pontos = pontos - pontosperdidos;// reuntilizou a variável e adicionou um novo valor para ela através da operação aritimpética acima

                    }    
                    printf ("Fim do jogo!\n");
                    if (acertou){
                    printf("             OOOOOOOOOOO               \n");
                    printf("         OOOOOOOOOOOOOOOOOOO           \n");
                    printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
                    printf("    OOOOOO      OOOOO      OOOOOO      \n");
                    printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
                    printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
                    printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                    printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
                    printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
                    printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
                    printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
                    printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
                    printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
                    printf("         OOOOOO         OOOOOO         \n");
                    printf("             OOOOOOOOOOOO              \n");
                    printf("\nParabéns! Você acertou!\n");
                    printf("Voce acertou em %d tentativas\n", tentativas);
                    printf("Total de pontos: %.1f  \n", pontos);

                    }else{
                        printf("       \\|/ ____ \\|/    \n");   
                    printf("        @~/ ,. \\~@      \n");   
                    printf("       /_( \\__/ )_\\    \n");   
                    printf("          \\__U_/        \n");
                    printf("Voce perdeu!\n");
                    }
                    
                        
                        
            } 
                
            
                    
                
            


