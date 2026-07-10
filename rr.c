#include <stdio.h>

void input(int bt[], int p[], int n);
void calculate(int bt[], int wt[], int tat[], int n, int tq);
void display(int p[], int bt[], int wt[], int tat[], int n);

int main() {
    int n, tq;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], wt[n], tat[n], p[n];

    input(bt, p, n);

    printf("Enter Time Quantum: ");
    scanf("%d", &tq);

    calculate(bt, wt, tat, n, tq);
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

void calculate(int bt[], int wt[], int tat[], int n, int tq) {
    int rem_bt[n], time = 0, done;

    for (int i = 0; i < n; i++)
        rem_bt[i] = bt[i];

    do {
        done = 1;

        for (int i = 0; i < n; i++) {
            if (rem_bt[i] > 0) {
                done = 0;

                if (rem_bt[i] > tq) {
                    time += tq;
                    rem_bt[i] -= tq;
                } else {
                    time += rem_bt[i];
                    wt[i] = time - bt[i];
                    rem_bt[i] = 0;
                }
            }
        }
    } while (!done);

    for (int i = 0; i < n; i++)
        tat[i] = wt[i] + bt[i];
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
