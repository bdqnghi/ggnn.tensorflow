int main()
{
	int n,k,i,a[15],l,p=0,t;
	for(i=1;;i++)
	{scanf("%d",&a[0]);
	if (a[0]==-1  ) break;
	else{
	p=0;
		for(k=1;k<=15;k++)
		{
			scanf("%d",&a[k]);
			if (a[k]==0) break;
		}
		    for(t=0;t<=k;t++)
		    for(l=0;l<=k;l++)
		    {
    			if(a[l]==a[t]*2) p=p+1;
    		}
    		p=p-1;
    		printf("%d\n",p);}
	}
return 0;
}