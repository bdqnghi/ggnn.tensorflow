int main()
{
	int n,a[300],*p,i,*q,*k,b[300],j=0;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++,p++)scanf("%d",p);
	printf("%d,",a[0]);
	for(k=a+1;k<a+n;k++)
	{
		for(q=a;q<k;q++)
		{
			if(*k==*q)break;
		}
		if(q>=k)b[j]=*k,j++;
	}
	for(i=0;i<j-1;i++)printf("%d,",b[i]);
	printf("%d",b[i]);
}