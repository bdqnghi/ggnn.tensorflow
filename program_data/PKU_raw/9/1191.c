int main()
{
	int n,i,j=0,e,v=0,k,m[100],p[100],b[100];
	char s[100][11],temp[11],d[100][11],f[100][11];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		scanf("%d",&m[i]);
	}
	for(i=0;i<n;i++)
	{
		if(m[i]>=60)
		{
			strcpy(d[j],s[i]);
			p[j]=m[i];
			j++;
		}
		else
		{
			strcpy(f[v],s[i]);
			b[v]=m[i];
			v++;
		}
	}
	for(k=1;k<j;k++)
	{
		for(i=0;i<j-k;i++)
		{
			if(p[i]<p[i+1])
			{
				e=p[i+1];
				p[i+1]=p[i];
				p[i]=e;
				strcpy(temp,d[i+1]);
				strcpy(d[i+1],d[i]);
				strcpy(d[i],temp);
			}
		}
	}
	for(i=0;i<j;i++){
		printf("%s\n",d[i]);
	}
	for(i=0;i<v;i++){
		printf("%s\n",f[i]);
	}
	return 0;
}
