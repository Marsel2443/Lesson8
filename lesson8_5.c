 /*
 *Пример
 *Данные на входе:      40 105 203 1 14 1000 22 33 44 55 
 *Данные на выходе:     105 203 1 1000 
 * 
 */
 
#include <stdio.h>

#define N 10

void InputArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }   
}

void Print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }       
}

int main(void)
{
    int arr[N];
    int counter = 0;
    
    printf("Enter 10 numbers:\n");
    
    InputArray(arr, N);
    
    for (int i = 0; i < N; i++)
    {
        if ((arr[i] / 10 ) % 10 == 0)
            counter++;
    }
    
    int secondArr[counter];
    
    for (int i = 0; i < N; i++)
    {   
        static int j =0;
        
        if ((arr[i] / 10 ) % 10 == 0)
        {
            secondArr[j] = arr[i];
            j++;
        }
    }
    
    Print(secondArr, counter);
    
    return 0;
}

