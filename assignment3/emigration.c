#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char* argv[]) {
    FILE* fp;
    //"State_Code_Origin" 	"County_Code_Origin" 	"State_Code_Dest" 	"County_Code_Dest"
    // 	"State_Abbrv" 	"State_Name" 	"Return_Num" 	"Exmpt_Num" 	"Aggr_AGI"
    char stateCodeOrigin[5], stateCodeDest[5], destStateName[30], uselessShit[30];
    int Aggr_AGI, uselessInt;

    const char stateMassachusetsCode[5] = "\"25\"";

    fp = fopen("./stateoutflow0708.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "Unable to open input\n");
        exit(-1);
    }
    // skip first line bcs its... useless shit
    char buffer[200];
    fgets(buffer, 200, fp);

    printf("%-30s %7s\n", "STATE", "TOTAL");
    printf("--------------------------------------\n");

    unsigned int total = 0;

    while (fscanf(fp, "%s\t%s\t%s\t%s\t%s\t%s\t%d\t%d\t%d",stateCodeOrigin, uselessShit, stateCodeDest, uselessShit, uselessShit, destStateName, &uselessInt, &uselessInt, &Aggr_AGI) > 0) {
        //fscanf(fp, "%s\t%s\t%s\t%s\t%s\t%s\t%d\t%d\t%d",stateCodeOrigin, uselessShit, stateCodeDest, uselessShit, uselessShit, destStateName, &uselessInt, &uselessInt, &Aggr_AGI);
        // they come from Massachusetts
        if (strcmp(stateCodeOrigin,stateMassachusetsCode) == 0) {
            printf("%-30s %7d\n", destStateName, Aggr_AGI);
            total += Aggr_AGI;
        }
        //printf("Read sateCodeOrigin |%s|\n", stateCodeOrigin);
        //printf("Read stateCodeDest |%s|\n", stateCodeDest);
        //printf("Read destStateName |%s|\n", destStateName);
        //printf("Read uselessShit |%s|\n", uselessShit);
        //printf("Read Aggr_AGI |%d|\n", Aggr_AGI );
        //printf("Read uselessInt |%d|\n", uselessInt );
    }
    printf("--------------------------------------\n");
    printf("%-30s %7d\n", "TOTAL", total);
    return 0;
}