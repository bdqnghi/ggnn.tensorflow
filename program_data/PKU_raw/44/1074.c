int reverse(int num)
{
        int a,b=0,i,j;
        for(j=1;num!=0;j++)
    {
            a=num%10;
            num=num/10;
            b=b*10+a; 
    } 
    return(b);
}
main()
{
      int num,i,c;
      for(i=1;i<=6;i++)
      {
                       scanf("%d",&num);
                       c=reverse(num);
                       printf("%d\n",c);
       }
}