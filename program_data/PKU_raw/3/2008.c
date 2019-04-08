int main()
{
int n,m,i,j,a[1000];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]+a[j]==m) printf("yes"),i=n,j=n;
				else if(i==n-2&&j==n-1) printf("no");
return 0; 
}