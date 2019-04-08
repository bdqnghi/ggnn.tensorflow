
int main(int argc, char* argv[])
{
	int n,a[20000],b,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		a[i]=0;
	if(n<5)
		printf("empty");
	else{
		for(i=2;i<=n;i++)
		{
			for(b=2;b<i-1;b++)
			{
				if(i%b==0)
					break;
			}
			if(b==i-1)
			{
				a[i]=i;
			}
		}
		for(i=1;i<n-1;i++)
		{
			if(a[i]!=0&&a[i+2]!=0)
				printf("%d %d\n",a[i],a[i+2]);
		}
	}
	return 0;
}


