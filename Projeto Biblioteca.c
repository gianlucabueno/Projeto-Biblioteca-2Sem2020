//for(i;i<4;i++)
//p->tabela[i].sigla E 001 A 002
//p->tabela[i].reg = 000;
   
struct info_livro{
    char sigla;// [L]ivre, [E]mprestado, [R]eservado
    int reg;// registro do livro
};
    
struct info_aluno{
    char sigla;
    char RA[7];
    int dia_ret;// dia –máx=31
    int mes_ret;// mes: fev=28 dias
    int dia_dev;// mes: abril=jun=set=nov=30 dias
    int mes_dev;// os demais = 31 dias
};

typedef struct    livro{
    int reg;// gerado automaticamente
    char titulo[80];
    char autor[80];
    struct info_aluno status[2];
}livro;

typedef struct aluno{
    char nome[80];
    char RA[7];
    int emprestado;// qtdede livros emprestados –Max=3
    int reservado;// qtde de livros reservados –Max =1
    struct info_livro tabela[4];
}aluno;
    

void aloca_aluno(aluno **p, int tamanho);
void aloca_livro(livro **p, int tamanho);
void cadastra_livro(livro *p_livros, int tamanho);
void cadastra_aluno(aluno *p_alunos, int tamanho);
void consulta_alunototal();
void consulta_alunoparcial();
void consulta_livrototal();
void consulta_livrostatus();
void consulta_livroautor();

void main(){
    aluno *alunos = NULL;    
    livro *livros = NULL;

    int op,saida;

    printf("\n\nSistema Biblioteca");
    aloca_livro(&livros, qtde_l);    
    cadastra_livro(livros, qtde_a);
    
    do{
        system("cls");
        printf("\n\nOpcoes disponiveis:\n\n
                [1] Cadastro de Aluno;\n
                [2] Consulta de Aluno;\n
                [3] Cadastro de Livro\n
                [4] Consulta de Livro\n
                [5] Fim.\n");        
        printf("Digite a opcao desejada: ");        
        scanf("%d", &opcao);        
        flush(stdin);

        switch(opcao){
            case 1:
                do{
                system("cls");
                printf("Cadastro de aluno");
                cadastra_aluno(aluno *p, qtde_a)
                printf("\n\nDeseja Cadastrar outro aluno:\n\n
                        [1] Sim;\n
                        [2] Nao;\n");
                }while((opcao != 2);
                break
            case 2:
                system("cls");
                printf("Consulta de aluno");
                printf("\n\nOpcoes disponiveis:\n\n
                        [1] Consulta Total;\n
                        [2] Consulta Parcial;\n
                        [3] Sair;\n");
                        printf("Digite a opcao desejada: ");        
                        scanf("%d", &opcao);        
                        flush(stdin);
                        switch(opcao){
                            case 1:
                                system("cls");
                                if()
                                    consulta_alunototal();
                               else{
                                    printf("Nao existem alunos cadastrados\n");
                                    printf("Por Favor Cadastre alunos antes de fazer a verificacao");
                                    opcao = 4;
                                }
                                break;
                            case 2:
                                system("cls");
                                if()
                                    consulta_alunototal();
                               else{
                                    printf("Nao existem alunos cadastrados\n");
                                    printf("Por Favor Cadastre alunos antes de fazer a verificacao");
                                    opcao = 4;
                                }
                                break;
                            case 3: 
                                printf("\n\nRetornado ao menu\n");                
                                break;            
                                default:                
                                    printf("\nOpcao nao reconhecida!");
                               
                        }
                break
            case 3:
                do{
                system("cls");
                printf("Cadastro de aluno");
                cadastra_livro(livro *p, qtde_l);
                printf("\n\nDeseja Cadastrar outro livro:\n\n
                        [1] Sim;\n
                        [2] Nao;\n");
                }while((opcao != 2);
                break;
            case 4:
                saida = 0;
                do{
                    system("cls");
                    printf("Consulta de livro");
                    printf("\n\nOpcoes disponiveis:\n\n
                        [1] Consulta Total;\n
                        [2] Consulta Parcial pelo Status;\n
                        [3] Consulta Parcial pelo Titulo;\n
                        [4] Sair;\n");
                
                    switch(opcao){
                            case 1:
                                system("cls");
                                if(){
                                    consulta_livrototal();
                                }
                                else{
                                    printf("Nao existem alunos cadastrados\n");
                                    printf("Por Favor Cadastre alunos antes de fazer a verificacao");
                                    opcao = 4; 
                                }


                                break;
                            case 2:
                                system("cls");
                                if(){
                                    
                                    consulta_livrostatus();
                                }
                                else{
                                    printf("Nao existem alunos cadastrados\n");
                                    printf("Por Favor Cadastre alunos antes de fazer a verificacao");
                                   opcao = 4; 
                                }
                                break;
                            case 3:
                                if(){
                                    consulta_livroautor();
                                }
                                else{
                                    printf("Nao existem alunos cadastrados\n");
                                    printf("Por Favor Cadastre alunos antes de fazer a verificacao");
                                    opcao = 4;
                                }
                                break    
                            case 4:
                                printf("\n\nRetornado ao menu\n");                
                                break;            
                                default:                
                                    printf("\nOpcao nao reconhecida!");
                                
                        }
                }while((opcao != 4);
                break
            case 5:   
                printf("\nObrigada por utilizar o sistema!\n");                              
                break;            
                default:                
                    printf("\nOpcao nao reconhecida!");
        }

    }while(opcao != 5);

}

void aloca_aluno(aluno **p, int tamanho){
    if((*p = (aluno *)realloc(*p, tamanho*sizeof(aluno)))==NULL)
    exit(1);
}

void aloca_livro(livro **p, int tamanho){
    if((*p = (livro *)realloc(*p, tamanho*sizeof(livro)))==NULL)
    exit(1);
}

void cadastra_livro(livro *p_livros, int tamanho){
    printf("\nRegistro do Livro : ");
    scanf("%d", &(p_livros->reg));
    printf("\nNome do Livro: ");
    gets(p_livros->nome);
    printf("\nAutor do Livro: ");
    gets(p_livros->nome);
    for(int i; i < 2;i++){
        printf("\nStatus do Livro: ");
        gets(p_livros->status[i].sigla);
        printf("\nStatus do Livro: ");
        gets(p_livros->status[i].RA);
        do{
            printf("\nMes de Retirada: ");
            scanf("%d", &(p_livros->status[i].mes_ret));

        }while(p_livros->status[i].mes_ret > 0 && p_livros->status[i].mes_ret < 12);
        do{
        
            if(p_livros->status[i].mes_ret == 2){
                do{
                    printf("\nDia de Retirada: ");
                    scanf("%d", &(p_livros->status[i].dia_ret));
                }while(p_livros->status[i].dia_ret < 1 && p_livros->status[i].mes_ret > 29);
            }
            else if(p_livros->status[i].mes_ret == 4 || p_livros->status[i].mes_ret == 6 || p_livros->status[i].mes_ret == 9 || p_livros->status[i].mes_ret == 11){
                do{
                    printf("\nDia de Retirada: ");
                    scanf("%d", &(p_livros->status[i].dia_ret));
                }while(p_livros->status[i].dia_ret < 1 || p_livros->status[i].dia_ret > 30);
            }
            else{
                printf("\nDia de Retirada: ");
                scanf("%d", &(p_livros->status[i].dia_ret));
            }

        }while(p_livros->status[i].dia_ret < 1 || p_livros->status[i].dia_ret > 31);

        
        do{
            printf("\nMes de Retirada: ");
            scanf("%d", &(p_livros->status[i].mes_dev));

        }while(p_livros->status[i].mes_dev > 0 && p_livros->status[i].mes_dev < 12);
        do{
        
            if(p_livros->status[i].mes_dev == 2){
                do{
                    printf("\nDia de Retirada: ");
                    scanf("%d", &(p_livros->status[i].dia_dev));
                }while(p_livros->status[i].dia_dev < 1 && p_livros->status[i].mes_dev > 29);
            }
            else if(p_livros->status[i].mes_dev == 4 || p_livros->status[i].mes_dev == 6 || p_livros->status[i].mes_dev == 9 || p_livros->status[i].mes_dev == 11){
                do{
                    printf("\nDia de Retirada: ");
                    scanf("%d", &(p_livros->status[i].dia_dev));
                }while(p_livros->status[i].dia_dev < 1 || p_livros->status[i].dia_dev > 30);
            }
            else{
                printf("\nDia de Retirada: ");
                scanf("%d", &(p_livros->status[i].dia_dev));
            }

        }while(p_livros->status[i].dia_dev < 1 || p_livros->status[i].dia_dev > 31);
    
    }
}

void cadastra_aluno(aluno *p_alunos, int tamanho){
    printf("\nNome do Aluno: ");
    gets(p_alunos->nome);
    printf("\nRA do Aluno: ");
    gets(p_alunos->nome);
    do{
    printf("\nNumero de Livros Emprestados: ");
    scanf("%d", &(p_alunos->emprestado));
    }while(p_alunos->emprestado < 4);
    do{
        printf("\nNumero de Livros Reservados: ");
        scanf("%d", &(p_alunos->reservado));
    }while(p_alunos->reservado < 1);
        for(int i; i < 4;i++){
            printf("\nStatus do Livro: ");
            gets(p->tabela[i].sigla);
             if(p->tabela[i].sigla == 'E' || p->tabela[i].sigla == 'R'){
                printf("\nRegistro do Livro: ");
                scanf("%d", &(p->tabela[i].reg));
            }    
        }
    }
}

void consulta_alunototal(){

}

void consulta_alunoparcial(){

}

void consulta_livrototal(){

}

void consulta_livrostatus(){

}

void consulta_livroautor(){

}