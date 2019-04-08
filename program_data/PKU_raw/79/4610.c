int main()
{
    int n,m,i,s;
    for(;;)
    {
     scanf("%d %d",&n,&m);
     if(n==0)
        break;
     else
        if(n==1)
          printf("1\n");
        else
         {
          for(i=2,s=0;i<=n;i++)
            {
             s=(s+m)%i;
            }               
           printf("%d\n",s+1);
          }  
    } 
}     
