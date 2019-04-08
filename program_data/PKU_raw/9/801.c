int main()
{
	int n,i,j,k,b[100],pos[100],t,m;
	char a[100][11],temp[11];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s %d",a[i],&b[i]);
	for(i=0;i<n;i++)
	pos[i]=i;
	for(i=0;i<n;i++)
	for(j=0;j<n-1-i;j++)
	{
		if(b[j]<b[j+1])
		{
			t=b[j];
			b[j]=b[j+1];
			b[j+1]=t;
			m=pos[j];
			pos[j]=pos[j+1];
			pos[j+1]=m;
			strcpy(temp,a[j]);
			strcpy(a[j],a[j+1]);
			strcpy(a[j+1],temp);
		}
	}
	j=0;
	while(b[j]>=60)
	{
		printf("%s\n",a[j++]);
	}
	k=j;
	for(i=k;i<n;i++)
	for(j=k;j<n-1;j++)
	{
		if(pos[j]>pos[j+1])
		{
			strcpy(temp,a[j]);
			strcpy(a[j],a[j+1]);
			strcpy(a[j+1],temp);
			m=pos[j];
			pos[j]=pos[j+1];
			pos[j+1]=m;
		}
	}
	for(j=k;j<n;j++)
	printf("%s\n",a[j]);
	return 0;
}
