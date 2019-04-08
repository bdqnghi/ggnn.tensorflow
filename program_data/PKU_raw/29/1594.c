int main()
{
double n,m,i=0,j,a,b,temp,sum=2;
cin>>n;
while(i<n)
{
cin>>m;
a=2;
b=1;
for(j=1;j<m;j++)
{
temp=a;
a=a+b;
b=temp;
sum+=a/b;
}
printf("%.3f\n",sum);
sum=2;
i++;
}
}