#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // 2^N * N = 49152 = 4 * 4 * 4 * 4 * 4 * 4 * 12
    // N = 12
    // because child proccess share same fd with parent proccess
    // but child holds their own buffer
    // therefore each proccess holds "-" * N
    // there will be 2^N proccess
    // = 2^N * N
    int N = 12;
    for (int i = 0; i < N; i++) {
        fork();
        printf("-");                        
    }

    fflush(stdout);
    return 0;
}