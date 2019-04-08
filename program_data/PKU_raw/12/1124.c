int main()
{
	int a[16],i,c=0,e=0,n,l;
	while(1)
	{
		for(i=0;i<16;i++)
		{
			scanf("%d",&a[i]);
			e=e+1;
			if(a[i]==0 || a[i]==-1) break;
		}
		if(a[i]==-1) break;
		for(l=0;l<e-1;l++)
			for(n=l+1;n<e-1;n++)
				{
					if((a[l]/a[n]==2 && a[l]%a[n]==0) || (a[n]/a[l]==2 && a[n]%a[l]==0))
						c=c+1;
				}
		printf("%d\n",c);
		int a[16]={0};
		e=c=0;
	}
	return 0;
}
