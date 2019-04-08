
int main()
{
	int m,n,i,j,k,l,p=0;
	int a[20]={0};
	int b[20]={0};
	scanf("%d%d",&m,&n);
	a[0]=m;
	b[0]=n;
	i=0;
	j=0;
	while(a[i]!=1)
	{
		a[i+1]=a[i]/2;
		i++;
	}
	while(b[j]!=1)
	{
		b[j+1]=b[j]/2;
		j++;
	}
	for(k=0;k<=i;k++)
	{
		if(p==1) break;
		else
		{
			for(l=0;l<=j;l++)
			{
				if(a[k]==b[l])
				{
					printf("%d\n",a[k]);
					p=1;
					break;		
				}
			}
		}
	}
	

return 0;
}