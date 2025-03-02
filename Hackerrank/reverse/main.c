    #include <stdio.h>
    int main()
    {
        int  sum , i , t ,a ,b , c;

        scanf("%d" , &t) ;

        for(i=0 ; i<t ; i++)
        {
            sum = 0 ;
            scanf("%d %d %d" , &a , &b , &c) ;
            sum = c/(a+b) ;
            if(sum>1)
                printf("Case %d: %d \n" , i+1 , sum) ;
            else
                printf("Case %d: No\n" , i+1) ;
        }
        return 0;
    }
