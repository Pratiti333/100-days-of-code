#include <stdio.h>
#include <string.h>

int main() {
    char numStr[100];
    if (scanf("%s", numStr) != 1) return 0;

    int freq[10] = {0};
    for (int i = 0; numStr[i] != '\0'; i++) {
        if (numStr[i] >= '0' && numStr[i] <= '9') {
            freq[numStr[i] - '0']++;
        }
    }

    int maxFreq = 0;
    int mostFreqDigit = 0;

    // Smallest digit picked in case of a tie
    for (int d = 0; d <= 9; d++) {
        if (freq[d] > maxFreq) {
            maxFreq = freq[d];
            mostFreqDigit = d;
        }
    }

    printf("%d\n", mostFreqDigit);
    return 0;
}