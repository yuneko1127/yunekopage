#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(void){
    char your_sexuality[100];
    int day = 0;
    bool all_sexuality = true;
    bool sexuality_change = false;

    printf("Enter your sexuality:");
    scanf("%s", your_sexuality);

    while(all_sexuality == true){
        if(sexuality_change == true){
            break;
        } else if(day == 0){
            printf("You are %s.\n", your_sexuality);
        } else if(day == 1){
            printf("You are %s after %d day. It's not a phase.\n", your_sexuality, day);
        } else {
            printf("You are still %s after %d days. It's not a phase.\n", your_sexuality, day);
        }
        sleep(1);
        day++;
    }

    return 0;
}
