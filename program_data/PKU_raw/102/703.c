int main()
{
	int n,i,k=0,j=0,b;
	float a,e,m[40],f[40];
	char p[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&p);
		scanf("%f",&a);
		if(p[0]=='f')
		{
			f[k]=a;
		    k++;
		}
		else
		{
			m[j]=a;
			j++;
		}
	}
	for(i=1;i<j;i++)
	{
		for(b=0;b<j-i;b++)
		{
			if(m[b]>m[b+1])
			{
				e=m[b+1];
				m[b+1]=m[b];
				m[b]=e;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%.2f ",m[i]);
	}
	for(i=1;i<k;i++)
	{
		for(b=0;b<k-i;b++)
		{
			if(f[b]<f[b+1])
			{
				e=f[b+1];
				f[b+1]=f[b];
				f[b]=e;
			}
		}
	}
    for(i=0;i<k;i++)
	{
		if(i!=k-1)
		{
		   printf("%.2f ",f[i]);
		}
		else
		{
           printf("%.2f",f[i]);
		}
	}
	return 0;
}
