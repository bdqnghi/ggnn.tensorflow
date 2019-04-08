
int main()
{
    int a,sum;
    sum=0;
    scanf("%d",&a);
    if (a%3==0)
    sum=sum+3;
    if (a%5==0)
    sum=sum+5;
    if (a%7==0)
    sum=sum+7;
    if (sum==0)
    printf("n");
    if (sum==3)
    printf("3");
    if (sum==5)
    printf("5");
    if (sum==7)
    printf("7");
    if (sum==8)
    printf("3 5");
    if (sum==10)
    printf("3 7");
    if (sum==12)
    printf("5 7");
    if (sum==15)
    printf("3 5 7");
    return 0;
}
