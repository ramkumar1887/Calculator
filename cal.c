#include<stdio.h>
int main(){
    float a,b,c;
    char ch, op;
    scanf("%f",&a);
    scanf("%c",&op);
    while (op!='='){    
        scanf("%f",&b);
        while((ch=getchar())!='='&&(ch=='*'||ch=='/')){    
            scanf("%f",&c);
            switch (ch){
            case '*':
                b=b*c;
                break;
            case '/':
                b=b/c;
                break;
            }
        }
        switch (op){
            case '+':
                a=a+b;
                break;
            case '-':
                a=a-b;
                break;
            case '*':
                a=a*b;
                break;
            case '/':
                a=a/b;
                break;
        }  
        op=ch;
    }
    printf("%.2f",a);
    return 0;
}