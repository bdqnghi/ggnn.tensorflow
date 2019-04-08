int main()
{
    int n,i,e,p,k;
    int a[50000],b[50000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
		scanf("%d%d",&a[i],&b[i]);
	}
	for(k=1;k<=n;k++)
    {
	for(i=0;i<n-k;i++)
    {
		if(a[i]>a[i+1])
        {
			e=a[i+1];
		    p=b[i+1];
			a[i+1]=a[i];
			b[i+1]=b[i];
			a[i]=e;
			b[i]=p;
		}
	}
	}
	for(i=0;i<n-1;i++)
    {
		if(a[i+1]>b[i])
        {
			printf("no");
                        i++;
			break;
		}else if(b[i+1]<b[i])
        {
			b[i+1]=b[i];
		}
	}
	if(a[i]<=b[i-1])
    {
		if(b[i]>b[i-1])
        {
		printf("%d %d",a[0],b[i]);
		}
        else
        {
			printf("%d %d",a[0],b[i-1]);
		}
	}

	return 0;
}
