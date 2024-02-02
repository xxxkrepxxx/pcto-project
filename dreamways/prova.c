#include<stdio.h>

int main()
{
  char S[2000];
    int x=0;

    puts( "racconta cosa hai sognato!");
    fgets(S, sizeof(S), stdin);
    while (S[x] != '\0')
    {

        if ((S[x] == 'm' || S[x] == 'M') && (S[x+1] =='o' || S[x+1] == 'O') && (S[x+2] == 'r' || S[x+2] == 'R') && (S[x+3] == 't' || S[x+3] == 'T') && (S[x+4] == 'o' || S[x+4] == 'O' || S[x+4] == 'e' || S[x+4] == 'E' || S[x+4] == 'i' || S[x+4] == 'I'))
        {
            puts("Dreaming of death can symbolize the end of something in your life, followed by a new beginning or rebirth. It may indicate the conclusion of a challenging period or the closing of a chapter to make way for new opportunities.");
        }

        x = x+1;
    }
}