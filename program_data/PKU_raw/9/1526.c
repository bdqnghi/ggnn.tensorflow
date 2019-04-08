void main()
{
	struct patient
	{
		char a[11];
		int b;
	}p[100];
	int n,i,j=0,m,t;
	char c[100][11],string[11];
	int d[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",p[i].a,&p[i].b);
	for(i=0;i<n;i++)
	{
		if(p[i].b>=60)
		{
			strcpy(c[j],p[i].a);
			d[j]=p[i].b;
			j++;
		}
	}
	m=j;
	for(j=0;j<m-1;j++)
		for(i=0;i<m-1-j;i++)
			if(d[i]<d[i+1])
			{
				t=d[i];
				d[i]=d[i+1];
				d[i+1]=t;
				strcpy(string,c[i]);
				strcpy(c[i],c[i+1]);
				strcpy(c[i+1],string);
			}
	for(i=0;i<m;i++)
		printf("%s\n",c[i],d[i]);
	for(i=0;i<n;i++)
	{
		if(p[i].b<60)
			printf("%s\n",p[i].a,p[i].b);
	}
} 