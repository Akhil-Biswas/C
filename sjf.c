#include <stdio.h>

void input(int bt[], int p[], int n);
void sort(int bt[], int p[], int n);
void calculate(int bt[], int wt[], int tat[], int n);
void display(int p[], int bt[], int wt[], int tat[], int n);

int main() {
    int n;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], wt[n], tat[n], p[n];

    input(bt, p, n);
    sort(bt, p, n);
    calculate(bt, wt, tat, n);
    display(p, bt, wt, tat, n);

    return 0;
}

void input(int bt[], int p[], int n) {
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
        printf("Enter Burst Time of P%d: ", i + 1);
        scanf("%d", &bt[i]);
    }
}

void sort(int bt[], int p[], int n) {
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (bt[i] > bt[j]) {
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void calculate(int bt[], int wt[], int tat[], int n) {
    wt[0] = 0;

    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
    }
}

void display(int p[], int bt[], int wt[], int tat[], int n) {
    float avg_wt = 0, avg_tat = 0;

    printf("\nProcess\tBT\tWT\tTAT\n");

    for (int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\n", p[i], bt[i], wt[i], tat[i]);
        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    printf("\nAverage Waiting Time = %.2f", avg_wt / n);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat / n);
}
