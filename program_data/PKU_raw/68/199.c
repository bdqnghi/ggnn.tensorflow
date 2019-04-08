int sushu(int a)
{int z,k;
if(a==2)
z=1;
for(k=2;k<=sqrt(a);k++)
{if(a%k==0)
{z=0;break;}
}
if(k>sqrt(a))
z=1;
return(z);}
int main()
{int n,i,j,k;
scanf("%d",&n);
for(k=3;2*k<=n;k++)
{i=2*k;
if(sushu(i-2)==1)
printf("%d=2+%d\n",i,i-2);
for(j=3;j<=i/2;j++)
{if(sushu(i-j)==1&&sushu(j)==1)
{printf("%d=%d+%d\n",i,j,i-j);break;}
}
}
return 0;}
