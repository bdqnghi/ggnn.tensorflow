int main()
{
	int i,m,n,p,a[100];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		if(i==1)
		{
			if(a[0]>a[1])
			{
				m=a[0];
			    p=a[1];
            }
			else if(a[0]<a[1])
            {   
				m=a[1];
			    p=a[0];
			}
		}
		if(i>1)
			if(a[i]>m)
			{
				p=m;
				m=a[i];
			}
			else if((a[i]>p)&&(a[i]<m)==1)
			{
				m=m;
				p=a[i];
            }
	}
	printf("%d\n",m);
	printf("%d\n",p);
	return 0;

}