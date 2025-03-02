    #include <stdio.h>

    #define inf 98999999;

    void marge(int arr[], int beg, int mid, int end)
    {
        int n1 = mid - beg + 1;
        int n2 = end - mid;
        int L[100] , R[100];

        for ( i = 0; i < n1; i++)
        {
            L[i] = arr[beg + i];
        }

        for ( i = 0; i < n2; i++)
        {
            R[i] = arr[mid + i + 1];
        }

        L[n1] = inf;
        R[n2] = inf;

        int i = 0, j = 0, k;

        for ( k = beg; k <= end; k++)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
        }
    }

    void marge_sort(int arr[], int beg, int end)
    {
        if (beg >= end)
            return;
        int mid = (beg + end) / 2;
        marge_sort(arr, beg, mid);
        marge_sort(arr, mid + 1, end);
        marge(arr, beg, mid, end);
    }

    int main()
    {
        int n, i, j, temp, arr[100];

        printf("Enter Array Size : ");
        scanf("%d", &n); // Array Size

        printf("\nBefore Marge Sort - ") ;

        for (size_t i = 0; i < n; i++)
        {
            arr[i] = rand()%100 ;
            printf("%d " , arr[i]) ;
        }

        marge_sort(arr, 0, n - 1);

        printf("\nAfter Marge Sort -  ") ;\

        for ( i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
