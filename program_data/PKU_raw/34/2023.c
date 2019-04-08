main()
{
    int a,b;
    scanf("%d",&a);
    haha: 
    if (a==1)printf("End\n");
    else
    { 
     if(a%2==1)
       {
        b=a*3+1;  
        printf("%d*3+1=%d\n",a,b);
        a=(a*3)+1;goto haha;
       }
     if(a%2==0)
       {
        b=a/2;
        printf("%d/2=%d\n",a,b);
        a=a/2;
        goto haha;
       }
    }
}
