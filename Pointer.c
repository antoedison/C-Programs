#include<stdio.h>

int main(){
    //declaration of pointer int* p or int p*;
    /*
    int* pc;
    int* c;
    c = 5;
    pc = &c;
    c = 1;
    printf("%d \n",c);
    printf("%d",*pc);
    */
    int* pc,c;
    c = 22;
    printf("%d\n",c);// output: 22
    printf("%p\n",&c);//output: 0x7ffc2827787c
    
    pc = &c;
    printf("%p\n",pc);//output: 0x7ffc2827787c
    printf("%d\n",*pc);//output: 22
    
    c = 11;
    printf("%p\n",pc);
    printf("%d\n",*pc);
    *pc = 2;
    printf("%p\n",&c);
    printf("%d\n",c);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}