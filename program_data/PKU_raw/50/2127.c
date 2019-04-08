int main()
{
    int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i,sum=12,w;
    scanf("%d",&w);
    if(w==7)
        printf("1\n");
    for(i=1;i<=11;i++)
    {
        sum=sum+days[i];
        if(w>=1&&w<=5)
        {if(sum%7==(5-w))
            printf("%d\n",i+1);}
        else
        {if(sum%7==(12-w))
            printf("%d\n",i+1);}
    }
    return 0;
}
