/* 1 부터 19 까지의 합*/
#include <stdio.h>
#include <math.h>
// // Problem 1
// int main() {
//   int N;
//   scanf("%d", &N);
//   for (int i=0; i < N; i++) {
//     for (int j=0; j < 2*N-1; j++) {
//       if (j < N-i-1) {
//         printf(" ");
//       }
//       else if (j < N+i) {
//         printf("*");
//       }
//       else {
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }
// }

// //Problem 2
// int main() {
//   int N;
//   scanf("%d", &N);
//   for (int i=N-1; i >= 0; i--) {
//     for (int j=0; j < 2*N-1; j++) {
//       if (j < N-i-1) {
//         printf(" ");
//       }
//       else if (j < N+i) {
//         printf("*");
//       }
//       else {
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }
// }

// //Problem 3
// int main() {
//     int sum = 0;
//     for (int i=0; i <= 1000; i++) {
//         if (!(i % 3) || !(i % 5)) {
//             sum += i;
//         }
//     }
//     printf("%d\n", sum);
// }

// //Problem 4
// int main() {
//     int a = 1, b = 1, c, count = 0, sum = 0;
//     while (b < 1000000) {
//         count += 1;
//         if (count %2) {
//             sum += b;
//         }
//         c = b;
//         b += a;
//         a = c;
//     }
//     printf("%d\n", sum);
// }

// //Problem 5
// int main() {
//     int N, mul = 1;
//     scanf("%d", &N);
//     for (int i=1; i<=N; i++) {
//         mul *= i;
//     }
//     printf("%d\n", mul);
// }

// //Problem 6
// int main() {
//     int N = 2000;
//     int a, b, c, count = 0;
//     for (a = N-3; a > (N-a)/2 + 1; a--) {
//         for (b = N-a-1; b > (N-a-b); b--) {
//             if ( b >= a) {
//                 continue;
//             }
//             count += 1;
//         }
//     }
//     printf("%d\n", count);
// }

// Problem 7
int main() {
    int N, M;
    scanf("%d", &N);
    M = N;
    printf("\n%d = ", N);

    for (int i=2; i <= sqrt(N); i++) {
        while (M % i == 0) {
            M /= i;
            printf("%d * ", i);
        }
    }
    printf("\b\b\b   \n");
}
