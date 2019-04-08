int main()
{
 int m,n,i,sum,temp,k=0,h,t=0,pan=0;
 int a[MN]={0};
 int b[MN]={0};
    scanf("%d%d",&m,&n);
         for(i=m;i<=n;i++)
    {
       sum=0;
          temp=i;
       while(temp)
   {
       sum=sum*10+temp%10;
       temp/=10;
   }
   if(i==sum)
   {
    a[k]=i;
    k++;
    continue;
   }
   }
   for(k=0;k<MN;k++)
   {
    for(h=2;h<a[k];h++)
    {
       if((a[k]%h)==0)
        pan=1;
    }
    if(pan==0)
    {
      b[t]=a[k];
      t++;
      pan=0;
      continue;
    }
    else pan=0;
   }
   if(b[0]==0)
	   printf("no");
   else
   for(t=0;t<(MN-1);t++)
   {
             if(b[t+1]!=0)
    {
                 printf("%d",b[t]);
                 printf(",");
    }
             else if(b[t]!=0&&b[t+1]==0)
             printf("%d",b[t]);
   }
         printf("\n");
}