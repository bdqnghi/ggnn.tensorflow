void main()
{
	int n,a[100],t,b[100],c[100];
	char h[100][10],h1[100][10],h2[100][10],y[10];
	scanf("%d",&n);
	int i,j,k;
	int i1,j1;
	for(i=0;i<n;i++)
	{
		scanf("%s",h[i]);
		scanf("%d",&a[i]);
	}
	i1=0;j1=0;
	for(k=0;k<n;k++)
	{
		if(a[k]>=60)
		{b[i1]=a[k];
		strcpy(h1[i1],h[k]);i1++;}
		else
		{c[j1]=a[k];
		strcpy(h2[j1],h[k]);j1++;}

	}

	for(j=0;j<i1-1;j++)
		for(i=0;i<i1-1-j;i++)
			if(b[i]<b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
				strcpy(y,h1[i]);
				strcpy(h1[i],h1[i+1]);
				strcpy(h1[i+1],y);
			}

			for(i=0;i<i1;i++)
			{
				puts(h1[i]);
			}
			for(i=0;i<j1;i++)
				puts(h2[i]);
}

