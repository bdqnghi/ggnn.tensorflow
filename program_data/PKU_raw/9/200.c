void main()
{
	int n,i,j=0,k=0,m,a[100],b[100],c[100];
	char p[100][30],q[100][30],r[100][30],s[1][30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",r[i],&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>=60)
		{
			strcpy(p[j],r[i]);
			b[j]=a[i];
			j++;
		}
		if(a[i]<60)
		{
			strcpy(q[k],r[i]);
			c[k]=a[i];
			k++;
		}
	}
	for(k=0;k<j-1;k++)
	{
			for(i=0;i<j-k-1;i++)
			if(b[i]<b[i+1])
			{
				m=b[i];
				b[i]=b[i+1];
				b[i+1]=m;
				strcpy(s,p[i]);
				strcpy(p[i],p[i+1]);
				strcpy(p[i+1],s);
			}
				
	}
	for(i=0;i<j;i++)
		printf("%s\n",p[i]);
	for(i=0;i<n-j;i++)
		printf("%s\n",q[i]);
}