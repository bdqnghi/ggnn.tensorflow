int main()
{
    int a, n1, n2, n3, n4, n5, b;
    scanf("%d", &a);
    n1 = a/10000;
    n2 = a/1000 - n1 * 10;
    n3 = a/100 - n1 * 100 - n2 * 10;
    n4 = a/10 - n1 * 1000 - n2 * 100 - n3 * 10;
    n5 = a - n1 * 10000 - n2 * 1000 - n3 * 100 - n4 * 10;
    b = n5 * 10000 + n4 * 1000 + n3 * 100 + n2 * 10 + n1;
    if(a/10==0)
         printf("%d", b/10000);
    else if(a/100==0)
         printf("%d", b/1000);
    else if(a/1000==0)
         printf("%d", b/100);
    else if(a/10000==0)
         printf("%d", b/10);
    else
         printf("%d", b);
    return 0;
}