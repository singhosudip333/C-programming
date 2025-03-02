 #include <stdio.h>

 int binary_search(int arr[] , int item , int low , int high)
 {
     if(low>high)
        return -1 ;

     int mid = (low+high)/2 ;

     if(item==arr[mid])
        return mid ;
     else if(item<arr[mid])
        return binary_search(arr , item , low , mid-1) ;
     else if(item>arr[mid])
        return binary_search(arr , item , mid+1 , high) ;
 }

 int main()
    {
        int n , i , arr[100] , item ;

        printf("Enter array size : ") ;
        scanf("%d" , &n) ;

        for(i = 0 ; i < n ; i++)
        {
            printf("Number : ") ;
            scanf("%d" , &arr[i]) ;
        }

        for(i = 0 ; i < n ; i++)
        {
            printf("%d " , arr[i]) ;
        }

        printf("\nEnter search item : ") ;
        scanf("%d" , &item) ;

        int result = binary_search(arr , item , 0 , n-1) ;

        if(result== -1)
            printf("Data Not Found !") ;
        else
            printf("Item found in position %d" , result+1) ;
    }
