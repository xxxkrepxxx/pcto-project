#include<stdio.h>
#include<stdlib.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


void T()
{
  
    char H[]=ANSI_COLOR_GREEN"Home"ANSI_COLOR_RESET;
    char S[]=ANSI_COLOR_BLUE"search"ANSI_COLOR_RESET;
    char DI[]=ANSI_COLOR_RED"Dream interpretator"ANSI_COLOR_RESET;
    char CS[]=ANSI_COLOR_MAGENTA"share your dream"ANSI_COLOR_RESET;
    char CG[]=ANSI_COLOR_YELLOW"Tarot Generator"ANSI_COLOR_RESET;

    puts(ANSI_COLOR_CYAN"Scegli in che sezione dell'applicazione muoverti!"ANSI_COLOR_RESET);
    printf("\n 1) %s \n 2) %s \n 3) %s \n 4) %s \n 5) %s \n",H,S,DI,CS,CG);
}

int sogno()

{
    char S[3000];
    puts(ANSI_COLOR_BLUE "racconta cosa hai sognato stanotte!" ANSI_COLOR_RESET);
    scanf("%s[^\n]",S);

}

int main()
{

    T();

}