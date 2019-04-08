void main()
{
int a,b,k,i,t,sum;
i=10000;
sum=0;
t=1;
scanf("%d",&k);
for(i=10000;i>=1;i=i/10)
{
 a=k/i;
 b=k%i;
 k=b;
 if(a==0)
  t=t+1;
 else
  sum=sum+a*pow(10,5-t)/i;
}
printf("%d",sum);
} 

