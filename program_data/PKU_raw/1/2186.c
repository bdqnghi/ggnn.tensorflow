int main()
{
int digui(int p,int q); 
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
int a,sum=1;
scanf("%d",&a);
for(j=2;j<a;j++)
{if(j*j>a)
break;
else if(a%j==0)
sum=sum+digui(j,a/j);
}
printf("%d\n",sum);
}
}
int digui(int p,int q)
{
int z=1,d;
if(p==q)
z=1;
else if(p>q)
z=0;
else
for(d=p;d<q;d++)
{if(d*d>q)
break;
else if(q%d==0)
z=z+digui(d,q/d);
}
return(z);
}