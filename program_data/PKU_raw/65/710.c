
int main() {
    int n; scanf("%d", &n);
    int i, count = 0, a, b;
    for (i = 0; i < n; ++ i) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 1)
            count ++;
        else if (a == 0 && b == 2)
            count --;
        else if (a == 1 && b == 0)
            count --;
        else if (a == 1 && b == 2)
            count ++;
        else if (a == 2 && b == 0)
            count ++;
        else if (a == 2 && b == 1)
            count --;
    }
    if (count > 0) printf("A\n");
    else if (count < 0) printf("B\n");
    else printf("Tie\n");
    return 0;
}
