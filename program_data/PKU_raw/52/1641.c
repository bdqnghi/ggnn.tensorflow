void f(int *p,int,int);
void main()
{int n,m,a[100],i,*p;
	scanf("%d%d",&n,&m);
   for(i=0;i<=n-1;i++)
	   scanf("%d",&a[i]);
f(a,n,m);
   for(p=a;p<=a+n-2;p++)
	   printf("%d ",*p);
   printf("%d",*p);


}


void f(int *p,int n,int m)
{
int j,i,temp;
for(j=n-m;j<=n-1;j++)
  for(i=j;i>=j-n+m+1;i--)
  {temp=*(p+i);
  *(p+i)=*(p+i-1);
  *(p+i-1)=temp;
  }
}