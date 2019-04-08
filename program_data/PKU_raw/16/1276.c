main()
{
int  sum,len,i;
int  a[10];
scanf("%d",&sum);
if (sum>=10000) len=5;
  else if(sum>=1000) len=4;
     else if(sum>=100) len=3;
       else if(sum>=10) len=2;
          else len=1;
  for (i=1;i<=len;i++)
{  a[i]=sum/(pow(10,(len-i)));
   sum=sum-a[i]*pow(10,(len-i));
}
for (i=1;i<=len;i++)
  printf("%d",a[len-i+1]);
}