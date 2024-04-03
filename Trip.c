#include <stdio.h>
int main() {
    int n, i;
    float a[100], sum = 0, avg;

    printf("Enter the numbers of students: ");
    scanf("%d", &n);
    printf("Enter Money spent by each student");
    for (i = 0; i < n; ++i) {
        scanf("%f", &a[i]);
        sum += a[i];
    }

    avg = sum / n;
    printf("\nAverage = %.2f", avg);
    float diff=0;
    for(i=0;i<n;i++){
        if(a[i]>avg)
          diff=diff+(a[i]-avg);
    }
   printf("\n Difference is:%f",diff);
    return 0;
}


Sample Input :
3
10.00
20.00
 30.00 

Sample Output:
$ 10.00
