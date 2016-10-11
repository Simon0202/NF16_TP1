#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ex1_1(){
    //Ecrire un programme C qui lit deux réels, les affiche, calcule leur somme et affiche le résultat.
    
    float a=0,b=0;
    
    scanf("%f %f",&a,&b);
    
    printf("a=%f\tb=%f\n",a,b);
    
    printf("somme= %f\n",a+b);
}

void ex1_2(){
    //Ecrire un programme C qui permute les valeurs de deux variables lues au clavier.
    float a=2, b=3;
    
    //This algorithme permutes var without using a temp var
    a = a+b;
    b= a-b;
    a= a-b;
    
    
    printf("a=%f\tb=%f\n",a,b);
}

void ex1_3(){
    //Ecrire un programme C qui calcule le pourcentage x d'un nombre y. Ce nombre ainsi que le pourcentage sont saisis au clavier.
    
    float x, y=367;
    printf("Veuillez entrer la valeur x\n");
    scanf("%f",&x);
    printf("x représente %f poucentage de y\n",x/y*100);
    
}

void  ex1_4(){
    //Ecrire un programme C qui donne une température en degré Celsius à partir d'une température Fahrenheit (C = (5/9) * (F - 32)).
    
    int c,f;
    printf("La temperature Fahrenheit \n");
    scanf("%d",&f);
    c=(5/9)*(f-32);
    printf("La temperature en degre Celsius est : %f",c);
    
}

void ex1_5(){
    //Ecrire un programme C qui lit un entier et l'affiche en décimal, en octal et en hexadécimal.
    int i;
    printf("Entrer un entier\n");
    scanf("%d",&i);
    printf("Cet entier en decimal %d, en octal %o, en hexadecimal %x\n",i,i,i);
    
}

void ex1_6(){
    //Ecrire un programme C qui lit un entier et affiche à l'écran si c'est 0, un nombre pair ou un nombre impair.
    
    int i;
    printf("Entrer un entier \n");
    scanf("%d",&i);
    
    if (i == 0){
        printf("i est nul");
    }
    else if(i%2==0){
        printf("Le nombre est pair");
    }
    else{
        printf("Le nombre est impair");
    }
}

void ex1_7(){
    //Ecrire un programme C qui déclare un caractère (type char) et l'initialise une première fois avec le caractère '5', puis avec le caractère correspondant au code ASCII 96.
    char c = '5';
    char a=96;
    
    printf("c vaut : %c, a vaut :%c\n",c,a);
    
}


void ex2_2(){
    //Ecrire un programme C qui lit une suite d'entiers strictement positifs et qui s'arrête si on saisit la valeur -1.
    
    int a=0;
    
    
    while (a!= -1){
        printf("Entrer une valeur de a\n");
        scanf("%d",&a);
    }
}


void ex2_3(){
    //Ecrire un programme C qui demande "Quelle table de multiplication voulez-vous, tapez 0 (zéro) pour sortir ?", qui saisit un caractère, si le caractère est compris entre '1' et '9' alors on fera afficher la table correspondante puis on réitérera le processus, sinon on affichera "ce n'est pas dans les possibilités du programme, recommencez !" et on réitérera le   processus.
    
    char a;
    printf("Quelle table de multiplication voulez-vous, tapez 0 (zéro) pour sortir ?");
    scanf("%c",&a);
    
    //Better solution but try with switch
    //if(a>='1' && a<='9')
    while (a!='0'){
        switch (a) {
        case '1':
            printf("a=%d %d %d %d %d %d %d %d %d",a*1,a*2,a*3,a*4,a*5,a*6,a*7,a*8,a*9);
                printf("Quelle table de multiplication voulez-vous, tapez 0 (zéro) pour sortir ?");
                scanf("%c",&a);

            break;
        case '2':
            printf("a=%d %d %d %d %d %d %d %d %d",a*1,a*2,a*3,a*4,a*5,a*6,a*7,a*8,a*9);
            break;
        case '3':
            printf("a=%d %d %d %d %d %d %d %d %d",a*1,a*2,a*3,a*4,a*5,a*6,a*7,a*8,a*9);
            break;
        case '4':
                        printf("a=%d %d %d %d %d %d %d %d %d",a*1,a*2,a*3,a*4,a*5,a*6,a*7,a*8,a*9);
            break;
        case '5':
                        printf("a=%d %d %d %d %d %d %d %d %d",a*1,a*2,a*3,a*4,a*5,a*6,a*7,a*8,a*9);
            break;
        case '6':
                        printf("a=%d %d %d %d %d %d %d %d %d",a*1,a*2,a*3,a*4,a*5,a*6,a*7,a*8,a*9);
            break;
        case '7':
                        printf("a=%d %d %d %d %d %d %d %d %d",a*1,a*2,a*3,a*4,a*5,a*6,a*7,a*8,a*9);
            break;
        case '8':
                        printf("a=%d %d %d %d %d %d %d %d %d",a*1,a*2,a*3,a*4,a*5,a*6,a*7,a*8,a*9);
            break;
        case '9':
                        printf("a=%d %d %d %d %d %d %d %d %d",a*1,a*2,a*3,a*4,a*5,a*6,a*7,a*8,a*9);
            break;
        default:
            printf("ce n'est pas dans les possibilités du programme, recommencez !");
            break;
    }
}

}

void ex2_4(){
  
    // Ecrire un programme C en utilisant l'instruction Switch qui lit un caractère (fonction getchar()), qui affiche "un" si le caractère '1' a été saisi, "deux" si c'est le caractère '2', "trois" si c'est '3' et "autre caractère" sinon
}

void ex3_1(){
    
    
}


void ex3_2(){
    
    
}

void ex3_3(){
    
    
}


void ex3_4(){
    
    
}


void ex4_1(int a, int b){
    //Ecrire une fonction qui permute les valeurs de ses deux paramètres. Tester cette fonction par un appel depuis votre programme principal.
    a = a+b;
    b= a-b;
    a = a-b;
    
    printf("a= %d et b= %d\n",a,b);
}

 //This the version with pointeur. Without we duplicate the data.
void ex4_2(int *a,int *b){
    //Pourquoi dans la question 4.1 utilise-t-on des pointeurs ? Aurait-on pu utiliser des entiers ? Justifier.
   //The function receive the adress where the datas are.
    //We initialize a pointer with the adress where the value 2 is.
    int *tmp = a;
    //We change the adress a by b
    a = b;
    //We change the adress b by tmp and so on a
    b = tmp;
    //We print the value
    printf("a= %d et b= %d\n",*a,*b);
    
    
}

void ex4_3(){
    //Ecrire un programme qui déclare deux variables i et j; la première (i) sera une variable de type entier, la seconde (j) sera une variable de type pointeur sur entier. C'est-à-dire que j contiendra une valeur qui sera l'adresse (emplacement mémoire) d'un entier. Affecter à l'entier i la valeur 5, affecter à l'adresse j l'adresse de l'entier i, afficher l'entier i et le contenu de ce qui est pointé par la variable j.
    int i = 5;
    int *j;
    j = &i;
    printf("contenu de i= %d et contenu de ce qui est pointé par j= %d",i,*j);
    
    
}

void ex4_4(){
    //Modifier le programme précédent en ajoutant à la fin les instructions suivantes : incrémenter la donnée pointée par la variable j, afficher i, multiplier i par 5, afficher la donnée pointée par j, incrémenter l'adresse j et afficher de nouveau la donnée pointée par j.
    int i = 5;
    int *j;
    j = &i;
    printf("contenu de i= %d et contenu de ce qui est pointé par j= %d\n",i,*j);
    *j = *j+1;
    printf("i vaut maintenant= %d\n",i);
    i = i*5;
    printf("la donnee pointee par j vaut %d \n",*j);
    j++;
    printf("la donne j vaut %d \n",*j);
    
    
}

void ex4_5(){
    //You'll have to do it
    
}

void ex4_6(){
    //You'll have to do it
    
}

void ex4_7(){
    //Ecrire un programme qui lit une liste de Nb nombres, la décale d'un cran vers le haut (le premier doit se retrouver en dernier), l'affiche puis la décale vers le bas. Les nombres doivent être stockés dans un tableau avec une notation en pointeurs.
    unsigned int Nb = 0;
    unsigned int i = 0;
  
    
    printf("Veuillez entrer un nombre Nb de nombes à saisir\n");
    scanf("%d",&Nb);
    
    int tab[Nb];
    int val=0;
    while (i<Nb){
        printf("Veuillez entrer le %d chiffre\n",i+1);
        scanf("%d",&val);
        tab[i]=val;
        i++;
    }
    printf("Décalage vers le haut");
    
    printf("Décalage vers le bas");
    
}

void ex5_1(){
    //Ecrire un programme C qui détermine le nombre et la position d'une sous-chaîne dans une chaîne.
    int i;
    char chaine[] = "";
    char sous_chaine[] = "";
    
    
    printf("Veuillez saisir une chaine\n");
    scanf("%s",chaine);
    printf("la chaine est :%s\n",chaine);
    
    printf("Veuillez saisir une sous chaine\n");
    scanf("%s",sous_chaine);
    
    for (i=0; i<strlen(chaine);i++){
        
    }
    
    
    
}


int main(){
    //ex1_1();
    //ex1_5();
    //ex1_6();
    //ex1_7();
    //ex2_2();
    //ex2_3();
    //ex4_1(2, 3);
    
    //int a = 2;
    //int b = 3;
    //ex4_2(&a,&b);
    
    //ex4_3();
    //ex4_4();
    //ex4_7();
    
    ex5_1();
    
    
    
    
    return 0;
}
