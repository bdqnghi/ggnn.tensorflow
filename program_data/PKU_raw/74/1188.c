int sushu(int x)
{
    int i;
    if(x==2)
        return 1;
    for(i=2;i<=sqrt(x);i++)
        {
        if(x%i==0)
        return 0;
        }
    return 1;        
}
int huiwen(int x)
{
    int p[500],q[500],i,j,y;
    y=x;
    for(i=0;;i++)
        {
        p[i]=x%10;
        x=(x-p[i])/10;
        if(x==0)
        break;
        }
        x=y;
    for(j=i;j>=0;j--)
       {
         q[j]=x%10;
         x=(x-q[j])/10;
        if(x==0)
        break;              
       }
    for(j=0;j<=i;j++)
       {
       if(p[j]!=q[j])
       return 0;
       }
     return 1;     
}
main()
{
  int m,n,count=0,i;
  scanf("%d %d",&m,&n);      
  for(i=m;i<=n;i++)    
      {
      if(sushu(i)==0)
      continue;
      else
      {
             if(i/10==0&&count==0)    
                 {
                 printf("%d",i);
                 count++;
                 }
             else if(i/10==0&&count!=0)
                 {
                 printf(",%d",i);
                 count++;
                 }
             else if(i>=10&&huiwen(i)==1&&count==0)
                {
                 printf("%d",i);
                 count++;                        
                } 
             else if(i>=10&&huiwen(i)==1&&count!=0)
                {
                 printf(",%d",i);
                 count++;                        
                }       
      }
     
      }
      if(count==0)
      printf("no");
}