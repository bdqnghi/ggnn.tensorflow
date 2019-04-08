int reverse(int num)
{
    int a[100];
    int x,b,answer;
    answer=0;
    if(num<0)
    x=-num;
    else
    x=num;
    while (x!=0)
    {
        b=x%10;
        answer=answer*10+b;
        x=x/10;
    }
    if(num<0)
    answer=-answer;
    return answer;
}
main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&f);
    printf("%d",reverse(a));
    printf("\n");
    printf("%d",reverse(b));
    printf("\n");
    printf("%d",reverse(c));
    printf("\n");
    printf("%d",reverse(d));
    printf("\n");
    printf("%d",reverse(e));
    printf("\n");
    printf("%d",reverse(f));
    printf("\n");
}

 
