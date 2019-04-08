int main()
{
	int n,a[30000],i,j,k,l,t=1;
	scanf("%d",&n);
	for(l=0;l<n;l++)
	scanf("%d",&a[l]);
    for(i=0;i<n;i++)
	{
	   for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
			  for(k=j;k<n-1;k++)
			  {a[k]=a[k+1];}
			  n=n-1;
			}
			if(a[i]!=a[j])j++;
			}
	}
	for(i=0;i<n;i++)
		if(t){
			printf("%d",a[i]);t=0;}
		else printf(" %d",a[i]);
	return 0;
}
