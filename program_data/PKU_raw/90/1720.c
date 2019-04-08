int col(int m,int n);
int main()
{int n,i,a,b,t;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{scanf("%d %d",&a,&b);
t=col(a,b);
printf("%d\n",t);
}
return 0;
}
int col(int m,int n)
{int t;
if(n==0)
t=0;
else if(m==0)
t=1;
else if(n>m)
t=col(m,m);
else if(n<=m)
t=col(m,n-1)+col(m-n,n);
return(t);
}