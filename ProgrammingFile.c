#include <stdio.h>

int i;
char arr[100]={ }, brr[100]={ }, crr[100]={ }, drr[100]={ }, err[100]={ };
void answera(char arr[], int i);
void answerb(char brr[], int i);
void answerb(char crr[], int i);
void answerb(char drr[], int i);
void answerb(char err[], int i);

int main(){
    int a;
    printf("◇□□□□□□□□□□□□□□□□□□□◇\n□                                      □\n□        당신의 쉬프트 실력은 ?        □\n□                                      □\n◇□□□□□□□□□□□□□□□□□□□◇");
    printf("\n\n  당신의 쉬프트 실력을 알아보기 위해 만들어진 프로그램입니다!\n\n  당신의 쉬프트 실력은?\n\n\n\n");
    printf("  시작하려면 1번\n  종료하려면 아무거나 입력해주세요 ");
    scanf("%d", &a);
    if(a==1){
         printf("\n\n\n\n   그럼 시작합니다\n\n   ※주의 ! 한 문제 당 기회는 5번입니다.\n\n");
         printf("   1. afudmvw (Keyword : S)\n");
         for(i=5;i>0;i--){
             scanf(" %s", arr);
             answera(arr, i-1);
         }
     }
     else{
         return 0;
     }
 }

 void answera(char arr[], int i) {
     if(arr[0]=='i'&&arr[1]=='n'&&arr[2]=='c'&&arr[3]=='l'&&arr[4]=='u'&&arr[5]=='d'&&arr[6]=='e'){
         printf("정답입니다. 다음문제로 넘어갑니다\n\n");
         printf("   2. afudmvw (Keyword : S)\n");
     }
     else{
         if(i>0){
             printf("틀렸습니다. 기회는 %d 번 남았습니다. 다시 풀어주세요\n", i);
         }
         if(i==0){
             printf("남은 기회가 없습니다. 처음부터 다시 시작해주세요\n");
         }
     }
 }
