#include <stdio.h>
#include <stdlib.h>

int top= -1 , stk[100] , maxsize ;

void push (int item)
{
    if (top == maxsize-1 )
    {
        printf(" Stack is overflow ") ;
        return ;
    }
    top = top+1 ;
    stk[top] = item ;
    printf("%d is inserted in Stack \n" , item) ;
}

int main()
{
    maxsize=3 ;
    push(10) ;
    push(40) ;
    push(70) ;
    push(30) ;
    return 0;
}
