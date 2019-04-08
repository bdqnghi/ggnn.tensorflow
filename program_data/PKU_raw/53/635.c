void main()
{
	int n,i,j,k=0,a[300],b[300],*p=b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	b[k++]=a[0];
	for(i=1;i<n;i++)
	{for(j=0;j<k;j++)
	{if(a[i]==b[j])
	break;
	else if(j==(k-1))
			b[k++]=a[i];
	}
	}
	for(j=0;j<(k-1);j++)
		printf("%d,",*(p+j));
	printf("%d",*(p+k-1));
}

