
int check_assertions_a(int i, int j, int k)
{
    int correct = 0;
    if (j < i) {
        correct += 1;
    }
    if (k == i) {
        correct += 1;
    }
    return correct;
}

int check_assertions_b(int i, int j, int k)
{
    int correct = 0;
    if (i < j) {
        correct += 1;
    }
    if (i < k) {
        correct += 1;
    }
    return correct;
}

int check_assertions_c(int i, int j, int k)
{
    int correct = 0;
    if (k < j) {
        correct += 1;
    }
    if (j < i) {
        correct += 1;
    }
    return correct;
}

int main()
{
    int i, j, k;
    int array[3] = {1, 2, 3};
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                if (i == j || i == k || j == k) {
                    continue;
                }
                if (check_assertions_a(i, j, k) == i &&
                    check_assertions_b(i, j, k) == j &&
                    check_assertions_c(i, j, k) == k) {
                    printf("%c%c%c", k+'A', j+'A', i+'A');
                }
            }
        }
    }
    return 0;
}