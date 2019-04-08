int main()
{
  int n,i,k;
  scanf("%d",&n);
    while(n>1)
      {
        if(n%2==1) 
           {
             printf("%d*3+1=%d\n",n,(n*3+1));
             n=n*3+1;
            }
          if(n%2==0)
            {
              printf("%d/2=%d\n",n,(n/2));
             n=n/2;
            }
       }
     printf("End");
return 0;
}