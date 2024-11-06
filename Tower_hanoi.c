#include <stdio.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

void tower(int n, char A, char B, char C){
if(n==0){ return;}
tower(n-1,A,B,C);
tower(n-1,C,B,A);
}


int main() {
    int N = 3;

    // A, B, and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}
