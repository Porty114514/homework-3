#include<stdio.h>
int main(){
        int a , b , c , d , tmp;
        int yuansu[10];
        for(a=1;a<=10;a++){
        printf("ÊäÈëµÚ%d¸öÕûÊý\n",a);
        scanf("%d",&yuansu[a-1]);
        //printf("µÚ%d¸öÔªËØÊÇ%d\n",a,yuansu[a-1]);
        }
        for(b=0;b<=5;b++){
                tmp = yuansu[b];
                yuansu[b] = yuansu[9-b];
                yuansu[9-b] = tmp;
        }
        for(c=1;c<=10;c++){
                printf("%d\n",yuansu[c-1]);
        }
        return 0;
}
