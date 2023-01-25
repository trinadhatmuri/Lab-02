#include<stdio.h>
#include<stdlib.h>

int main() {
    int N;
    printf("Please enter number of elements in array: ");
    scanf("%d", &N);
    int *ptr = (int*)malloc(sizeof(int)*N);
    for (int i=0; i<N; i++) {
        printf("Please enter element %d of array: ",(i+1));
        scanf("%d", &ptr[i]);
    }
    printf("\nGiven array is: \n");
    for(int i=0; i<N; i++) {
        printf("%d\t", ptr[i]);
    }

    int temp, currLoc;
    for (int i=1; i<N; i++)
    {
        currLoc = i;
        while (currLoc > 0 && ptr[currLoc-1] > ptr[currLoc]){
            temp = ptr[currLoc];
            ptr[currLoc] = ptr[currLoc-1];
            ptr[currLoc-1] = temp;
            currLoc--;
        }
    }

    printf("\nThe sorted array is: \n");
    for(int i=0; i< N; i++) {
        printf("%d\t", ptr[i]);
    }

}