#include <stdio.h>
#include <string.h>

int GetRankValue(int victoryNum, int defeatNum){
    return victoryNum - defeatNum;
}

int main()
{
    int victoryNum;
    int defeatNum;
    
    printf("Type the number of victories: \n");
    scanf("%d", &victoryNum);
    printf("Type the number of defeats: \n");
    scanf("%d", &defeatNum);
    
    int rankValue = GetRankValue(victoryNum, defeatNum);
    char rank[10];
    
    if (rankValue < 10){
        strcpy(rank,"Ferro");
    } else if(rankValue <= 20){
        strcpy(rank,"Bronze");
    } else if(rankValue <= 50){
        strcpy(rank,"Prata");
    } else if(rankValue <= 80){
        strcpy(rank,"Ouro");
    } else if(rankValue <= 90){
        strcpy(rank,"Diamante");
    } else if(rankValue <= 100){
        strcpy(rank,"Lendário");
    } else if(rankValue >= 101){
        strcpy(rank,"Imortal");
    }
    
    printf("O Herói tem de saldo de %d está no nível de %s", rankValue, rank);

    return 0;
}
