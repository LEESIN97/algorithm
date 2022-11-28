#include <stdio.h>

int main()
{
    char s[31];
    char include_or_not;
    scanf("%s", s);

    for(char c = 97; c <= 122; c++){
        for(int i=0; s[i]!='\0'; i++){
            if(c == s[i]){
                printf("%d ",i);
                include_or_not = 'y';
                break;
            }
            if(s[i+1] == '\0') include_or_not = 'n';
        }

        if(include_or_not == 'n') printf("%d ", -1);
    }

    return 0;
}
