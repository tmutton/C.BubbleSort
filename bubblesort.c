#include <stdio.h>

int main()
{
    int numbersToSort[3] = { 4, 2, 6 };

    int numLength = 3; // todo: this can be improved by getting the length of numbersToSort

    printf("**Bubble Sort**\n");

    printf("Sorting numbers.. ");
    for (int i=0;i < numLength; i++){
        printf("%d", numbersToSort[i]);
    }
    printf("\n");

    // 1. iterate numbers
    // 2. compare current number with next number
    // 3. swap numbers if current number is greater
    for (int i=0; i < numLength; i++){
        for (int n=(i+1);n < numLength;n++){
            int currNumber = numbersToSort[i];
            int nextNumber = numbersToSort[n];

            if (currNumber > nextNumber){
                // swap the numbers
                numbersToSort[i] = nextNumber;
                numbersToSort[n] = currNumber;
            }
        }
    }

    printf("Finished sorting numbers.. ");
    for (int i=0;i < numLength; i++){
        printf("%d", numbersToSort[i]);
    }

    return 0;
} 