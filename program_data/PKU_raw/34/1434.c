void jiaogu(int i)
{
    if(i==1) printf("End");
    else
    {
        if(i%2)
        {
            printf("%d*3+1=%d\n",i,i*3+1);
            jiaogu(i*3+1);
        }
        else
        {
            printf("%d/2=%d\n",i,i/2);
            jiaogu(i/2);
        }
    }
}
main()
{
    int n,temp;
    scanf("%d",&n);
    jiaogu(n);
}
