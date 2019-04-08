void main()
{
int i,n,j,l,a,flag=0;
scanf("%d",&n);
for(i=3;i<=n;i=i+2)

{for(j=2;j<=sqrt(i);j++)
if(i%j==0) break;
if(j>sqrt(i))  {a=i;} 

for(l=2;l<=sqrt(a+2);l++)
if((a+2)%l==0) break;
if(l>sqrt(a+2)&&(a+2<=n))
{flag=1;printf("%d %d\n",a,a+2);}
}
if(flag==0) printf("empty");


}