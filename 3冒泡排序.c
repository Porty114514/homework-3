#include<stdio.h>
int main(){
        int shu[10];
        int a,b,c,d,e,f;
        int tmp,min;
        for(a=0;a<=9;a++){
                printf("输入第%d个数",a+1);
                scanf("%d",&shu[a]);
        }
        for(b=0;b<=9;b++){
                for(c=b;c<=9;c++){
                        min=shu[b];
                        f=b;
                        if(min>shu[c]){
                                tmp=shu[b];
                                shu[b]=shu[c];
                                shu[c]=tmp;
                        }
                }
        }
        for(e=0;e<=9;e++){
                printf("%d\n",shu[e]);
        }
        return 0;
}
