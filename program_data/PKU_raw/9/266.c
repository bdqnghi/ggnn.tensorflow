int main()
{
	char s[101][10]={0},p[101][10]={0},q[101][10]={0};
	int  a[101]={0},b[101]={0},c[101]={0};
	int n,i=0,j=0;
	int f=0,g=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",s[i],&a[i]);
		if(a[i]>=60)
		{
			b[f]=a[i];
			strcpy(p[f],s[i]);
			f++;
		}
		else if(a[i]<60)
		{
			c[g]=a[i];
			strcpy(q[g],s[i]);
			g++;
		}
	}
	int e=0;
	char y[10]={0};
	for(j=0;j<f;j++)
	{
		for(i=f-2;i>=j;i--)
		{
			if(b[i]<b[i+1])
			{
				e=b[i];
				b[i]=b[i+1];
				b[i+1]=e;
				strcpy(y,p[i]);
				strcpy(p[i],p[i+1]);
				strcpy(p[i+1],y);
			}
		}
	}
	for(i=0;i<f;i++)
	{
		printf("%s\n",p[i]);
	}
	for(j=0;j<g;j++)
	{
		printf("%s\n",q[j]);
	}
	return 0;
}

