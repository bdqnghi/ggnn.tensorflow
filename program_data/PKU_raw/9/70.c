void main()
{
	int n,i,j,b[101],b1[101],t,h,k;
	char a[101][11]={0},a1[101][11]={0},s1[11];
	scanf("%d",&n);
	for(i=0,h=0,k=0;i<=n-1;i++)
	{
		scanf("%s%d",s1,&t);
		if(t>=60)
		{
			b[h]=t;
			strcpy(a[h],s1);
			h++;
		}
		else
		{
			b1[k]=t;
			strcpy(a1[k],s1);
			k++;
		}
	}
	
	for(i=0;i<=h-2;i++)
	{
		for(j=0;j<=h-2-i;j++)
		{
			if(b[j]<b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
				strcpy(s1,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],s1);
			}
		}
	}
	for(i=0;i<=h-1;i++)
	{
		printf("%s\n",a[i]);
	}
	for(i=0;i<=k-1;i++)
	{
		printf("%s\n",a1[i]);
	}
}
			



