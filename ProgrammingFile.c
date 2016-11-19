#include <stdio.h>

int i, j, k, l, m;
char arr[100]={ }, brr[100]={ }, crr[100]={ }, drr[100]={ }, err[100]={ };
void answera(char arr[], int i);
void answerb(char brr[], int j);
void answerc(char crr[], int k);
void answerd(char drr[], int l);
void answere(char err[], int m);

int main(){
    int a;
    printf("\n                                     \n       당신의 쉬프트 실력은 ?       \n                                     \n");
    printf("\n\n  당신의 쉬프트 실력을 알아보기 위해 만들어진 프로그램입니다!\n\n  당신의 쉬프트 실력은?\n\n\n\n");
    printf("  시작하려면 1번\n  종료하려면 아무거나 입력해주세요 ");
    scanf(" %d", &a);
    if(a==1){
         printf("\n\n\n\n   그럼 시작합니다\n\n   ※주의 ! 한 문제 당 기회는 5번입니다.\n   모두 소문자로 입력해주세요\n   띄어쓰기는 생략해주세요(오류 나요)\n\n");
         printf("   1. afudmvw (Keyword : S)\n\n");
         for(i=5;i>0;i--){
             printf("  정답 : ");
             scanf(" %s", arr);
             answera(arr, i-1);
         }
     }
     return 0;
 }

 void answera(char arr[], int i) {
     if(arr[0]=='i'&&arr[1]=='n'&&arr[2]=='c'&&arr[3]=='l'&&arr[4]=='u'&&arr[5]=='d'&&arr[6]=='e'){
         printf("   정답입니다. 다음문제로 넘어갑니다\n\n");
         printf("   2. mjppt btwqi (Keyword : F)\n\n");
         for(j=5;j>0;j--){
            printf("   정답 : ");
            scanf(" %s", brr);
            answerb(brr, j-1);
         }
     }
     else{
         if(i>0){
             printf(" 틀렸습니다. 기회는 %d 번 남았습니다. 다시 풀어주세요\n\n", i);
         }
         else if(i==0){
             printf("남은 기회가 없습니다. 처음부터 다시 시작해주세요\n");
         }
     }
     return;
}
 void answerb(char brr[], int j) {
     if(brr[0]=='h'&&brr[1]=='e'&&brr[2]=='l'&&brr[3]=='l'&&brr[4]=='o'&&brr[5]=='w'&&brr[6]=='o'&&brr[7]=='r'&&brr[8]=='l'&&brr[9]=='d'){
         printf("   정답입니다. 다음문제로 넘어갑니다\n\n");
         printf("   3. rtqitcookpi (Keyword : C)\n\n");
         for(k=5;k>0;k--){
            printf("   정답 : ");
            scanf(" %s", crr);
            answerc(crr, k-1);
         }
     }
     else{
         if(j>0){
             printf(" 틀렸습니다. 기회는 %d 번 남았습니다. 다시 풀어주세요\n\n", j);
         }
         if(j==0){
             printf(" 남은 기회가 없습니다. 처음부터 다시 시작해주세요\n");
         }
     }
     return;ht
}
void answerc(char crr[], int k) {
     if(crr[0]=='p'&&crr[1]=='r'&&crr[2]=='o'&&crr[3]=='g'&&crr[4]=='r'&&crr[5]=='a'&&crr[6]=='m'&&crr[7]=='m'&&crr[8]=='i'&&crr[9]=='n'&&crr[10]=='g'){
         printf("   정답입니다. 다음문제로 넘어갑니다\n\n");
         printf("   4. zmupne zctpyeletzy (Keyword : L)\n\n");
         for(l=5;l>0;l--){
            printf("   정답 : ");
            scanf(" %s", drr);
            answerd(drr, l-1);
         }
     }
     else{
         if(k>0){
             printf(" 틀렸습니다. 기회는 %d 번 남았습니다. 다시 풀어주세요\n\n", k);
         }
         if(k==0){
             printf("남은 기회가 없습니다. 처음부터 다시 시작해주세요\n");
         }
     }
     return;
 }

void answerd(char drr[], int l) {
     if(drr[0]=='o'&&drr[1]=='b'&&drr[2]=='j'&&drr[3]=='e'&&drr[4]=='c'&&drr[5]=='t'&&drr[6]=='o'&&drr[7]=='r'&&drr[8]=='i'&&drr[9]=='e'&&drr[10]=='n'&&drr[11]=='t'&&drr[12]=='a'&&drr[13]=='t'&&drr[14]=='i'&&drr[15]=='o'&&drr[16]=='n'){
         printf("   정답입니다. 다음문제로 넘어갑니다\n\n");
         printf("   5. jp zpv xbou up ep tpnfuijoh, ep ju (Keyword : B)\n\n");
         for(m=5;m>0;m--){
            printf("   정답 : ");
            scanf(" %s", err);
            answere(err, m-1);
         }
     }
     else{
         if(l>0){
             printf(" 틀렸습니다. 기회는 %d 번 남았습니다. 다시 풀어주세요\n\n", l);
         }
         if(l==0){
             printf("남은 기회가 없습니다. 처음부터 다시 시작해주세요\n");
         }
     }
     return;
 }

void answere(char err[], int m) {
     if(err[0]=='i'&&err[1]=='f'&&err[2]=='y'&&err[3]=='o'&&err[4]=='u'&&err[5]=='w'&&err[6]=='a'&&err[7]=='n'&&err[8]=='t'&&err[9]=='t'&&err[10]=='o'&&err[11]=='d'&&err[12]=='o'&&err[13]=='s'&&err[14]=='o'&&err[15]=='m'&&err[16]=='e'&&err[17]=='t'&&err[18]=='h'&&err[19]=='i'&&err[20]=='n'&&err[21]=='g'&&err[22]=='d'&&err[23]=='o'&&err[24]=='i'&&err[25]=='t'){
         printf("   정답입니다. 수고하셨습니다\n\n");
         printf("   당신은 노가다의 왕입니다");
     }
     else{
         if(m>0){
             printf(" 틀렸습니다. 기회는 %d 번 남았습니다. 다시 풀어주세요\n\n", m);
         }
         if(m==0){
             printf("남은 기회가 없습니다. 처음부터 다시 시작해주세요\n");
         }
     }
     return;
 }
