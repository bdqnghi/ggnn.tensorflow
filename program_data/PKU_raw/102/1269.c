int main()
{

	int N,i,j,p,k;
	float d;
	float m[100],n[100];
	char c[100];
	scanf("%d",&N);
	p=0;
	k=0;
	for(i=0;i<=N-1;i++)
	{
		scanf("%s",&c);
		if(c[0]=='m')
		{
		scanf("%f",&m[p]);
		p++;
		}
		else
		{
		scanf("%f",&n[k]);
		k++;
		}
	}
	for(i=1;i<=p-1;i++)
	{
		for(j=0;j<=i-1;j++)
		{
			if(m[i]<m[j])
			{
				d=m[i];
				m[i]=m[j];
				m[j]=d;
			}
		}
	}
	for(i=1;i<=k-1;i++)
	{
		for(j=0;j<=i-1;j++)
		{
			if(n[i]>n[j])
			{
				d=n[i];
				n[i]=n[j];
				n[j]=d;
			}
		}
	}
	for(i=0;i<=p-1;i++)
	printf("%.2f ",m[i]);
	for(i=0;i<=k-2;i++)
	printf("%.2f ",n[i]);
	printf("%.2f",n[k-1]);
	return 0;
}