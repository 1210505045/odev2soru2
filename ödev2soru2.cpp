#include <stdio.h>

int main() {
    int sayi1,sayi2 = 0;
    int fark,deger = 0 ;
    printf("Sayi1 giriniz:\n");
    scanf("%d",&sayi1);
    printf("Sayi2 giriniz:\n");
    scanf("%d",&sayi2);
    int i = 0;
    while(1==1){
    if(sayi1>sayi2){
        fark = sayi1 - sayi2;
        sayi1 =fark;
        i++;
    }
    else if(sayi2>sayi1){
        fark = sayi2 - sayi1;
        sayi2 =fark;
        i++;
    }
    else if(sayi1==sayi2){
        fark = sayi2 - sayi1;
        sayi2 =fark;
        i++;
        break;
    }
    }
    printf("%d adimda sayi1 ve sayi2 sifira ulasmıstir",i);
    return 0;
}
