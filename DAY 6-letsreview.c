#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d",&t);
    for(int i = 0; i<t; i++){
        char s[10000];
        
        scanf("%s",&s);
        /* this for loop is used to print the even indexed characters */
        
        for(int j = 0; j<strlen(s); j++){
            if(j%2==0){
                printf("%c",s[j]);
            }
        }
        printf(" ");
        
        /* this for loop is used to print the odd indexed characters */
        for(int j = 0; j<strlen(s); j++){
            if(j%2!=0){
                printf("%c",s[j]);
            }
        }
        printf("\n");
    }   
    return 0;
}
