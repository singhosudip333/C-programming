    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int i, n, arr[100], start, end, mid, num ;

        printf("Enter Array Size :") ;
        scanf("%d", &n) ;
        printf("\nEnter Array Element in Ascending  Order \n") ;

        for(i=0 ; i<n ; i++)
        {
            printf("Element :") ;
            scanf("%d", &arr[i]) ;
        }

        printf("\nEnter the number you want to search :") ;
        scanf("%d", &num) ;

        start = 0 ;
        end = n-1 ;
        mid = (start+end)/2 ;

        do
        {
            if( arr[mid] == num)
            {
                printf("\nThe position of the number is %d\n", mid+1) ;
                break ;
            }
            else if(arr[mid] < num )
            {
                start = mid+1 ;
            }
            else
            {
                end = mid-1 ;
            }
            mid = (start+end)/2 ;
        }
        while(start<=end) ;

        if(start>end)
        {
            printf("Not found %d %d", start , end)  ;
        }

        return 0;

    }
