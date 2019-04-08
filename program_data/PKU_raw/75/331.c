int main()
{
	int x[1020]={0},y[1020]={0},n=0,i,j,k=0,t=0,p=0,max=0;
	char c[3000];
	gets(c);
	for(i=0;c[i]!=0;i++)
	{
		if(c[i]!=',') x[n]=x[n]*10+c[i]-'0';
		else n++;
	}
	n++;
	for(i=0;i<n-1;i++) scanf("%d,",&y[i]);
	scanf("%d",&y[n-1]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(x[j]>x[j+1])
			{
				x[j]=x[j]+x[j+1];
				x[j+1]=x[j]-x[j+1];
				x[j]=x[j]-x[j+1];
			}
			if(y[j]>y[j+1])
			{
				y[j]=y[j]+y[j+1];
				y[j+1]=y[j]-y[j+1];
				y[j]=y[j]-y[j+1];
			}
		}
	}
	j=0;
	for(t=0;t<=y[n-1];t++)
	{
		for(i=j;;i++)
		{
			if(t==x[i])
			{
				p++;
				j++;
			}
			if(t<x[i]) break;
		}
		for(i=k;;i++)
		{
			if(t==y[i])
			{
				p--;
				k++;
			}
			if(t<y[i]) break;
		}
		if(p>max) max=p;
	}
	printf("%d %d\n",n,max);
	return 0;
}