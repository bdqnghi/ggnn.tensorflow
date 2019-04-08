
const int MAXN = 600;

int main()
{
    int n; scanf("%d", &n);
    int num[MAXN], temp;
    int i, j, index = 0;
    for (i = 0; i < n; ++ i)
    {
        scanf("%d", &temp);
        if (temp % 2 == 1)
           num[index ++] = temp;
    }
    for (i = 0; i < index; ++ i)
        for (j = index - 1; j > 0; -- j)
            if (num[j] < num[j - 1])
               {
                        temp = num[j - 1];
                        num[j - 1] = num[j];
                        num[j] = temp;
               }
    printf("%d", num[0]);
    for (i = 1; i < index; ++ i)
        printf(",%d", num[i]);
}
