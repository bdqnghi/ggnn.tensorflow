move(int a[100],int n,int m)
{int *p,b;
 b=*(a+n-1);
 for(p=a+n-1;p>a;p--)
	 *p=*(p-1);
 *a=b;
 m--;
 if(m>0)
	 move(a,n,m);
}
int main(int argc, char* argv[])
{
	int n,m,a[100],i;
	scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	move(a,n,m);
	for(i=0;i<(n-1);i++)
		printf("%d ",a[i]);
	printf("%d",a[n-1]);
    return 0;
}