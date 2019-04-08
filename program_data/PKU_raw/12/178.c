void main()
{
	int a[15],b[20],i,l,j,n,p=0,num=0;
	while(1)
	{   	num=0;
		scanf("%d",&n);
		if(n==-1)break;
		else
		{
            a[0]=n;
		for(l=1;;l++)
		{
			scanf("%d",&a[l]);
			if(a[l]==0)break;
		}
        for(i=0;a[i]!=0;i++)
			for(j=0;a[j]!=0;j++)
	        {
              if(a[i]==a[j]*2)num++;
			}
		b[p]=num;
		p++;
		}
	}
	for(i=0;i<p;i++)printf("%d\n",b[i]);
}