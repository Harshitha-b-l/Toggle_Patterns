#include <stdio.h>
int main() {
 int n, i, j;
 // Get the number of lockers from the user
 printf("Enter the number of lockers: ");
 scanf("%d", &n);
 // Create an array to represent the locker states (0 - closed, 1 - open)
 int lockers[n];
 // Initialize all lockers to closed (0)
 for (i = 0; i < n; i++) {
 lockers[i] = 0;
 }
 // Simulate n passes by the lockers
 for (i = 1; i <= n; i++) {
 for (j = i - 1; j < n; j += i) {
 lockers[j] = !lockers[j]; // Toggle door state (0 to 1 or 1 to 0)
 }
 }
 // Print the state of each locker (open or closed)
 printf("\nLocker states:\n");
 for (i = 0; i < n; i++) {
 printf("Locker %d: %s\n", i + 1, lockers[i] ? "Open" : "Closed");
 }
 // Count and print the number of open lockers
 int open_count = 0;
 for (i = 0; i < n; i++) {
 if (lockers[i]) {
 open_count++;
 }
 }
 printf("\nNumber of open lockers: %d\n", open_count);
 return 0;
}