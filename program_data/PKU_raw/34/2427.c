int main()
{
    int a,b,c;
    scanf ("%d",&a);
    if (a==1)
    printf("End");
    else
    {
    do
    {b=a%2;
    if (b==0)
    {
    c=a/2;
    printf ("%d/2=%d\n",a,c);
    a=a/2;
    }
    else 
    {
    c=a*3+1;
    printf ("%d*3+1=%d\n",a,c);
    a=a*3+1;
    }
}

    while (a>1);

    printf("End");
}
    getchar();
    getchar();
}
