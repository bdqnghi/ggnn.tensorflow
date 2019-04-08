void main()
{
	char a[100]={""};
	char b[100]={""};
	int n,i,j,k,p;
	int c1,c2;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		c1=0;
		c2=0;
		scanf("%s",a);
		scanf("%s",b);
		for(;(a[c1]<=58)&&(a[c1]>=48);c1++)
		{}
		for(;(b[c2]<=58)&&(b[c2]>=48);c2++)
		{}
		k=0;
		for(i=c1-c2;i<c1;i++)
		{
			if(a[i]-b[k]>=0)
			{
				a[i]=a[i]-b[k]+48;
			}
			else if(a[i]-b[k]<0)
			{
				for(p=i-1;a[p]==48;p--)
				{
					a[p]=a[p]+9;
				}
				if(a[p]!=48)
				{
					a[p]=a[p]-1;
				}
				else{}
				a[i]=a[i]-b[k]+48+10;
			}
			k++;
		}
		printf("%s\n",a);
	}

}
