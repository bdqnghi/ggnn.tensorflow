void main()
{
	int a[2000],b[2000],max,min,i=0,j,n,k=0,s=0;
	char x=',';
	while(x!='\n')
	{
		scanf("%d",&a[i]);
        x=getchar();
		i++;
	}
	n=i;
	for(i=0;i<n;i++)
		scanf("%d%c",&b[i],&x);
	min=a[0];max=b[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)min=a[i];
		if(b[i]>max)max=b[i];
	}
for(i=min;i<=max;i++)
	{
		for(j=0;j<n;j++)
			if(i>=a[j]&&i<b[j])k++;
			if(k>s)s=k;
			k=0;
	}	
	printf("%d %d",n,s);
}

