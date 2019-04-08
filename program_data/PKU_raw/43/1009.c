int main()
{
	int a[10000];
	int m,i,n,sq,j,k=0,s,p,r;
	scanf("%d",&m);
	for(i=3;i<=m;i++)
	{
		s=0;
		sq=sqrt(i)+1;
		for(j=2;j<=sq;j++)
		{
			if(i%j==0)
			{
				s++;
				break;
			}
			else
				continue;
		}
		if(s==0)
		{
			a[k]=i;
			k++;
		}
		else
			continue;
	}
	for(i=0;i<k;i++)
	{
		r=0;
		if(a[i]<=m/2)
		{
		    p=m-a[i];
		    for(j=0;j<k;j++)
			{
			    if(p!=a[j])
				    continue;
			    else
				    printf("%d %d\n",a[i],p);
			}
		}
		else
			break;
	}
	return 0;
}
