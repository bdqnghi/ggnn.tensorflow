int main()
{
	int a[500],b[500],n,i,j,p,q,k=0,h=0,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		if(a[j]%2!=0)
		{
			b[k]=a[j];
			k=k+1;
		}
		else
			continue;
	}
	for(p=0;p<k;p++)
	{
		for(q=p;q<k;q++)
		{
			if(b[p]>b[q])
			{
				h=b[p];
		    	b[p]=b[q];
				b[q]=h;
			}
			else 
				continue;
		}
	}
	for(l=0;l<k;l++)
	{
		if(l==k-1)
		printf("%d",b[l]);
		else
			printf("%d,",b[l]);
	}
	return 0;
}


    