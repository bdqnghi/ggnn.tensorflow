void main()
{
	int i,j,n,m,k,s=0,z[100]={0},y,x[100]={0},t[100]={0};
	char a[1000],b[100][100],c[1000];
	for(i=0;i<100;i++)
		for(j=0;j<100;j++) b[i][j]='\0';
	for(i=0;i<1000;i++) c[i]='\0';
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!=' '&&a[i]!=',')
		{
			s=s+1;
			for(j=i;j<n;j++)
			{
				if(a[j]!=' '&&a[j]!=',')
				{
					b[s][j-i]=a[j];a[j]=',';
					x[s]=x[s]+1;
				}
				else break;
			}
		}
	}
	y=1;
	for(i=1;i<s;i++)
	{
		if(x[i+1]>x[y]) y=i+1;
	}
	printf("%s\n",b[y]);
	y=1;
	for(i=1;i<s;i++)
	{
		if(x[i+1]<x[y]) y=i+1;
	}
	printf("%s\n",b[y]);
}