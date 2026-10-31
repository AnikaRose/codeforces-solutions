
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        char p[101], q[101];

        int freq[26] = {0};

        scanf("%d %d", &n, &m);
        scanf("%s", p);
        scanf("%s", q);

        // Count characters in p
        for (int i = 0; p[i] != '\0'; i++) {
            freq[p[i] - 'a']++;
        }

        for (int i = 0; q[i] != '\0'; i++) {
            freq[q[i] - 'a']--;
        }

        if (freq['s' - 'a'] == 1 &&
            freq['i' - 'a'] == 1 &&
            freq['x' - 'a'] == 1) {

            int valid = 1;

            for (int i = 0; i < 26; i++) {
                if (i != ('s' - 'a') &&
                    i != ('i' - 'a') &&
                    i != ('x' - 'a') &&
                    freq[i] != 0) {
                    valid = 0;
                    break;
                }
            }

            if (valid)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
