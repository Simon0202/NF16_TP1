#include <stdio.h>


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


int main(){
    //ex1_1();
    //ex1_5();
    //ex1_6();
    //ex1_7();
    //ex2_2();
    ex2_3();
    
    
    
    
    return 0;
}
