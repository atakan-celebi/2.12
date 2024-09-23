#include <stdio.h>

int main(void)
{
    int a,b,c,d,e,f,g,anni,mesi,giorni,calcolo;
    printf("inserire gli anni, mesi e i giorni in questo ordine:");
    scanf("%d %d %d", &a, &b, &c);
    printf("inserire gli anni, mesi e i giorni per la differenza nello stesso ordine:");
    scanf("%d %d %d", &d, &f, &g);
    calcolo = d-a+(f-b)*30+(g-c)*360;
    giorni = calcolo%30;
    mesi = (calcolo/30)%12;
    anni = calcolo/360;
    printf("la differenza e': %d %d %d", giorni , mesi , anni);
    }
