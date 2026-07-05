#include <stdio.h>
#include <stdbool.h>
                    
bool 特例法(void);
                       
int main(void){
    bool gate;
    gate = 特例法();
                           
    if(gate == true){
        printf("家庭裁判所の審査を経て、戸籍上の性別を変更できる");
    } else {
        printf("戸籍上の性別を変更できない");
    }
    return 0;
}
                       
bool 特例法(void){
    bool gate = false;
    char diagnosis, child, reproduction, appearance;
    int age;
                           
    printf("2人以上の医師から性同一性障害の診断を受けている(Y or N):");
    scanf("%c", &diagnosis);
    printf("あなたの年齢:");
    scanf("%d", &age);
    // 2008年の改正を受けて
    // printf("子がいる(Y or N):");
    printf("未成年の子がいる(Y or N):");
    scanf("%c", &child);
    // 2023/10/25 最高裁判所の違憲判断を受けて
    // printf("生殖腺や生殖機能がある(Y or N):");
    // scanf("%c", &reproduction");
    printf("変更後の性別の性器に似た外見を備えている(Y or N):");
    scanf("%c, &appearance);
                           
    if(diagnosis == 'Y' && age >= 18 && child == 'N' /*&& reproduction == 'N'*/ && appearance == 'Y'){
       gate = true;
    }
                               
    return gate;
}
