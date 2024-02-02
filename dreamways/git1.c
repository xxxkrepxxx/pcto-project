#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


/*int sogno()

{
    char S[3000];
    int x=0;

    puts(ANSI_COLOR_BLUE "racconta cosa hai sognato!" ANSI_COLOR_RESET);
    fgets(S, sizeof(S), stdin);
    while (S[x] != '\0')
    {

        if ((S[x] == 'm' || S[x] == 'M') && (S[x+1] =='o' || S[x+1] == 'O') && (S[x+2] == 'r' || S[x+2] == 'R') && (S[x+3] == 't' || S[x+3] == 'T') && (S[x+4] == 'o' || S[x+4] == 'O' || S[x+4] == 'e' || S[x+4] == 'E' || S[x+4] == 'i' || S[x+4] == 'I'))
        {
            puts("non è un buon presentimento lol");
        }
    

        x = x+1;
    }

}*/

void tarot()
{

    int y;
    int z = 0;

    puts("\n you will explore your destiny through the interpretation of tarot cards \n");

    while (z != 3)
    {
        srand(time(NULL));
        int y1 = rand() % 12 + 1;

        if (y1==1)
        {
            puts(ANSI_COLOR_YELLOW" \nThe Fool"ANSI_COLOR_RESET);
            puts("\nThe Fool represents innocence, spontaneity, and the absence of worries or constraints. \n");
        }


        else if (y1==2)
        {
            puts(ANSI_COLOR_GREEN" \nThe Magician"ANSI_COLOR_RESET);
            puts("\nThe Magician represents you as an individual endowed with extraordinary creative power and the ability to translate your goals into reality. This card suggests that you have the resources and skills needed to achieve what you desire\n");
        }

        else if (y1 == 3)
        { 

            puts(ANSI_COLOR_RED"\nThe High Priestess"ANSI_COLOR_RESET);
            puts("\nThe High Priestess is often associated with you and your intuition, inner wisdom, and intuitive understanding. It may suggest that you should listen to your inner voice and pay attention to intuitive messages.");
        }

        else if (y1 == 4)
        { 

            puts(ANSI_COLOR_RED"\nThe Empress"ANSI_COLOR_RESET);
            puts("\nThe Empress is often a symbol that pertains to you, indicating that you are in a favorable period for the manifestation of new ideas, projects, or relationships. This card suggests that it might be an opportune time to express your creativity and allow for growth in your life.");
        }

        else if (y1 == 5)
        { 

            puts(ANSI_COLOR_YELLOW"\nThe Wheel of Fortune"ANSI_COLOR_RESET);
            puts("\nThe card suggests that there are greater forces at play influencing your life. It may indicate moments when destiny plays a significant role, and unexpected opportunities or challenges may arise for you.");
        }

        else if (y1 == 6)
        { 

            puts(ANSI_COLOR_MAGENTA"\nThe Moon"ANSI_COLOR_RESET);
            puts("\nThe Moon is connected to your emotional cycles and mood swings. It might suggest that you are going through a period of emotional intensity or that your emotions are influencing the situation.");
        }

        else if (y1 == 7)
        { 

            puts(ANSI_COLOR_GREEN"\nThe World"ANSI_COLOR_RESET);
            puts("\nThis card symbolizes your success and harmony. It might suggest that you have successfully integrated various experiences and brought them to a positive conclusion.");
        }

        else if (y1 == 8)
        { 

            puts(ANSI_COLOR_BLUE"\nThe Hanged Man"ANSI_COLOR_RESET);
            puts("\nThe Hanged Man often symbolizes your need for sacrifice or letting go to gain a higher perspective or achieve a desired goal. It may indicate moments when you need to let go of something to obtain something else.");
        }

        else if (y1 == 9)
        { 

            puts(ANSI_COLOR_YELLOW"\nThe Judgment"ANSI_COLOR_RESET);
            puts("\nThe card may indicate the need to face the consequences of your actions. It could suggest a period of evaluating your past choices and taking responsibility for your destiny.");

        }

        else if (y1 == 10)
        { 

            puts(ANSI_COLOR_MAGENTA"\nThe Devil"ANSI_COLOR_RESET);
            puts("\nThe Devil often represents material ties and earthly desires. It may indicate a dependency on material aspects of your life, such as money, power, or physical pleasure.");

        }

        else if (y1 == 11)
        { 

            puts(ANSI_COLOR_MAGENTA"\nThe Tower"ANSI_COLOR_RESET);
            puts("\nThe Tower is often associated with a sudden change or a breakdown of existing structures. This change can be unexpected and disruptive, leading to a reconsideration of the foundations of your lives.");

        }

        else if (y1 == 12)
        { 

            puts(ANSI_COLOR_YELLOW"\nThe Sun"ANSI_COLOR_RESET);
            puts("\nThe Sun represents illumination and mental clarity. It symbolizes your ability to see things clearly and gain a profound understanding of situations.");

        }
        z=z+1;
        sleep(1);
    }
    
    

            
}

void dream()
{
    char S[2000];

    puts(ANSI_COLOR_BLUE "racconta cosa hai sognato!" ANSI_COLOR_RESET);

    fgets(S, sizeof(S), stdin);
    fgets(S, sizeof(S), stdin);


    
    if (strstr(S,"morto") != NULL || strstr(S,"morte") != NULL || strstr(S,"morti") != NULL || strstr(S,"morta"))
    {
        puts("\nLa morte nei sogni può simboleggiare una trasformazione o un cambiamento nella tua vita. Potrebbe rappresentare la fine di un capitolo o di un'esperienza e il sorgere di nuove opportunità.");
    }

    if (strstr(S, "cadere") != NULL || strstr(S, "caduto") != NULL ||strstr(S, "caduta") != NULL ||strstr(S, "caduti") != NULL ||strstr(S, "cadendo") != NULL ||strstr(S, "cadevo") != NULL)
    {
        puts(" \nLa sensazione di cadere può riflettere la paura di perdere il controllo in una situazione della vita reale. Potrebbe indicare ansie o insicurezze riguardo a una situazione che sta sfuggendo di mano.");
    }

    if (strstr(S,"volare") != NULL || strstr(S,"volavo") != NULL || strstr(S,"volando") != NULL || strstr(S,"volato"))
    {
        puts("\nVolare nei sogni può simboleggiare la vostra libertà, il controllo o il desiderio di superare gli ostacoli. Può anche rappresentare una sensazione di leggerezza o evasione.");
    }

    if (strstr(S,"animali") != NULL || strstr(S,"animale") != NULL || strstr(S,"gatto") != NULL || strstr(S,"cane")|| strstr(S,"pesce")|| strstr(S,"serpente")|| strstr(S,"leone")|| strstr(S,"pantera")|| strstr(S,"volpe")|| strstr(S,"tigre")|| strstr(S,"insetto"))
    {
        puts("\nGli animali nei sogni spesso rappresentano i vostri istinti, emozioni o caratteristiche della personalità. Ad esempio, un leone potrebbe simboleggiare la vostra forza, mentre un gatto potrebbe rappresentare la vostra indipendenza.");
    }

    if (strstr(S,"nudo") != NULL || strstr(S,"nuda") != NULL)
    {
        puts("\nEssere nudi in un sogno può riflettere la vostra vulnerabilità, la paura del giudizio o la volontà di essere autentici.");
    }

   if (strstr(S,"treno") != NULL || strstr(S,"macchina") != NULL || strstr(S,"aereo") != NULL || strstr(S,"metro")|| strstr(S,"auto")|| strstr(S,"moto")|| strstr(S,"motorino")|| strstr(S,"bicicletta")|| strstr(S,"bici")) 
    {
        puts("\nVeicoli come auto, treni o aerei possono rappresentare il percorso delle vostre vite, la vostra direzione o il vostro senso di controllo.");
    }

    if (strstr(S,"amico") != NULL || strstr(S,"amici") != NULL || strstr(S,"mamma") != NULL || strstr(S,"papà")|| strstr(S,"nonna")|| strstr(S,"nonno")|| strstr(S,"zia")|| strstr(S,"zio")|| strstr(S,"professore")) 
    {
        puts("\nLa presenza di persone familiari nei sogni può riflettere i vostri legami emotivi, esperienze passate o aspetti della vostra personalità.");
    }

    if (strstr(S,"acqua") != NULL || strstr(S,"cascata") != NULL || strstr(S,"fiume") != NULL || strstr(S,"mare")|| strstr(S,"lago")|| strstr(S,"piscina")|| strstr(S,"pozzanghera")|| strstr(S,"pioggia")|| strstr(S,"tempesta")) 
    {
        puts("\nL'acqua nei sogni può simboleggiare le vostre emozioni, la vostra psiche o il flusso della vita. L'acqua calma può rappresentare tranquillità, mentre l'acqua agitata può indicare emozioni tumultuose.");
    }

    if (strstr(S,"acqua") != NULL || strstr(S,"cascata") != NULL || strstr(S,"fiume") != NULL || strstr(S,"mare")|| strstr(S,"lago")|| strstr(S,"piscina")|| strstr(S,"pozzanghera")|| strstr(S,"pioggia")|| strstr(S,"tempesta")) 
    {
        puts("\nL'acqua nei sogni può simboleggiare le vostre emozioni, la vostra psiche o il flusso della vita. L'acqua calma può rappresentare tranquillità, mentre l'acqua agitata può indicare emozioni tumultuose.");
    }

    if (strstr(S,"scuola") != NULL || strstr(S,"scuole") != NULL || strstr(S,"università") != NULL || strstr(S,"classe")|| strstr(S,"aula")|| strstr(S,"esame")|| strstr(S,"interrogazione")|| strstr(S,"test")|| strstr(S,"compiti")) 
    {
        puts("\nSe il sogno riguarda una scuola in cui ti senti sotto pressione o in ansia per gli studi, potrebbe riflettere stress o preoccupazioni legate alle aspettative accademiche o alle prestazioni.");
    }

    if (strstr(S, "dead") != NULL || strstr(S, "death") != NULL || strstr(S, "deaths") != NULL || strstr(S, "dead"))

    {
        puts("\nDreaming of death can symbolize a transformation or a change in your life. It might represent the end of a chapter or experience and the emergence of new opportunities.");
    }

    if (strstr(S, "fall") != NULL || strstr(S, "fallen") != NULL || strstr(S, "falling") != NULL || strstr(S, "fallen") != NULL || strstr(S, "falling") != NULL || strstr(S, "fell"))
    {
        puts("\nThe sensation of falling can reflect a fear of losing control in a real-life situation. It might indicate anxieties or insecurities about a situation slipping out of hand.");
    }

    if (strstr(S, "fly") != NULL || strstr(S, "flying") != NULL || strstr(S, "flown") != NULL)
    {
        puts("\nFlying in dreams can symbolize your freedom, control, or a desire to overcome obstacles. It may also represent a feeling of lightness or escapism.");
    }

    if (strstr(S, "animals") != NULL || strstr(S, "animal") != NULL || strstr(S, "cat") != NULL || strstr(S, "dog") || strstr(S, "fish") || strstr(S, "snake") || strstr(S, "lion") || strstr(S, "panther") || strstr(S, "fox") || strstr(S, "tiger") || strstr(S, "insect"))
    {
        puts("\nAnimals in dreams often represent your instincts, emotions, or personality traits. For example, a lion might symbolize your strength, while a cat may represent your independence.");
    }

    if (strstr(S, "nude") != NULL || strstr(S, "naked") != NULL)
    {
        puts("\nBeing nude in a dream can reflect your vulnerability, fear of judgment, or the willingness to be authentic.");
    }

    if (strstr(S, "train") != NULL || strstr(S, "car") != NULL || strstr(S, "plane") != NULL || strstr(S, "metro") || strstr(S, "auto") || strstr(S, "motorcycle") || strstr(S, "scooter") || strstr(S, "bicycle") || strstr(S, "bike"))
    {
        puts("\nVehicles like cars, trains, or planes can represent the path of your lives, your direction, or your sense of control.");
    }

    if (strstr(S, "friend") != NULL || strstr(S, "friends") != NULL || strstr(S, "mom") != NULL || strstr(S, "dad") || strstr(S, "grandma") || strstr(S, "grandpa") || strstr(S, "aunt") || strstr(S, "uncle") || strstr(S, "teacher"))
    {
        puts("\nThe presence of familiar people in dreams can reflect your emotional bonds, past experiences, or aspects of your personality.");
    }

    if (strstr(S, "water") != NULL || strstr(S, "waterfall") != NULL || strstr(S, "river") != NULL || strstr(S, "sea") || strstr(S, "lake") || strstr(S, "pool") || strstr(S, "puddle") || strstr(S, "rain") || strstr(S, "storm"))
    {
        puts("\nWater in dreams can symbolize your emotions, psyche, or the flow of life. Calm water may represent tranquility, while turbulent water may indicate tumultuous emotions.");
    }

    if (strstr(S, "school") != NULL || strstr(S, "schools") != NULL || strstr(S, "university") != NULL || strstr(S, "class") || strstr(S, "classroom") || strstr(S, "exam") || strstr(S, "questioning") || strstr(S, "test") || strstr(S, "assignments"))
    {
        puts("\nIf the dream involves a school where you feel under pressure or anxious about studies, it might reflect stress or concerns related to academic expectations or performance.");
    }
}



int main()
{
    char CHS[2];
    char S[2000];
    int x=0;

    puts( ANSI_COLOR_MAGENTA"$$$$$$$\\                                              $$\\      $$\\ \n"\
        "$$  __$$\\                                             $$ | $\\  $$ |\n"\
        "$$ |  $$ | $$$$$$\\   $$$$$$\\   $$$$$$\\  $$$$$$\\$$$$\\  $$ |$$$\\ $$ | $$$$$$\\  $$\\   $$\\  $$$$$$$\\ \n"\
        "$$ |  $$ |$$  __$$\\ $$  __$$\\  \\____$$\\ $$  _$$  _$$\\ $$ $$ $$\\$$ | \\____$$\\ $$ |  $$ |$$  _____| \n"\
        "$$ |  $$ |$$ |  \\__|$$$$$$$$ | $$$$$$$ |$$ / $$ / $$ |$$$$  _$$$$ | $$$$$$$ |$$ |  $$ |\\$$$$$$\\   \n"\
        "$$ |  $$ |$$ |      $$   ____|$$  __$$ |$$ | $$ | $$ |$$$  / \\$$$ |$$  __$$ |$$ |  $$ | \\____$$\\  \n"\
        "$$$$$$$  |$$ |      \\$$$$$$$\\ \\$$$$$$$ |$$ | $$ | $$ |$$  /   \\$$ |\\$$$$$$$ |\\$$$$$$$ |$$$$$$$  | \n"\
        "\\_______/ \\__|       \\_______| \\_______|\\__| \\__| \\__|\\__/     \\__| \\_______| \\____$$ |\\_______/  \n"\
        "                                                                             $$\\   $$ |           \n"\
        "                                                                             \\$$$$$$  |           \n"\
        "                                                                              \\______/  \n"ANSI_COLOR_RESET);

    puts(ANSI_COLOR_CYAN"\n Scegli in che sezione dell'applicazione muoverti! \n"ANSI_COLOR_RESET);
    puts(ANSI_COLOR_YELLOW"1) Dream interpretator \n "ANSI_COLOR_RESET);
    puts(ANSI_COLOR_YELLOW"2) Tarot Generator \n "ANSI_COLOR_RESET);

    fgets(CHS, sizeof(CHS), stdin);

    if (CHS[x] =='1')
    {
        dream();
    }  

    else if(CHS[x]=='2')
    {

        tarot();

    }
    return(0);

}