 /*
*Пример
 *Данные на входе:      4 1 2 1 11 2 34 11 0 11 
 *Данные на выходе:     11 
 * 
 */
 
#include <stdio.h>

#define N 10

void InputArray(int* arrIn, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrIn[i]);
    }   
}

void Print(int* arrIn, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrIn[i]);
    }       
}

int Selection(int* arrIn, int n)
{
    static int count, maxCount, element;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arrIn[i] == arrIn[j])
                count++;
            if (count > maxCount)
            {
                maxCount = count;
                element = arrIn[i];
            }
        }
    }
    
    if (maxCount < 2)
        return 0;
    else
        return element;
}

int main(void)
{
    int arrIn[N];
    
    printf("Enter 10 numbers:\n");
    
    InputArray(arrIn, N);
    
    printf("%d\n", Selection(arrIn, N));
    
    return 0;
}
