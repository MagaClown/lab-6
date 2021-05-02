#include <stdio.h>
#define N 3
#define M 3
main() {
    int mtx[N][M], arr[N*M], i, j, k;
    srand(time(NULL));
    for (i=0; i< N; i++) {
        for (j=0; j< M; j++) {
            mtx[i][j] = rand() % 100;
            printf("%3d", mtx[i][j]);
        }
        printf("\n");
    }
    printf("\n");
 
    k = -1;
    for (j=0; j< M; j++) 
        for (i=0; i< N; i++) {
            k += 1;
            arr[k] = mtx[i][j];
            printf("%3d", arr[k]);
        }
    printf("\n");
}

