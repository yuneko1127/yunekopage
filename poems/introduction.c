#include <stdio.h>
 
int main() {
    char name[];
    char pronouns[];
                    
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your pronouns (e.g.:they/them, she/her, he/him):");
    scanf("%s", pronouns);
                    
    printf("Hello World! I'm %s and I use %s pronouns.\n", name, pronouns);
                    
    return 0;
}
