void main()
{
	int a[100];
	int i,n;
	float m=0,j=0,p=0,q=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<=18) m=m+1;
		else if(a[i]<=35) j=j+1;
		else if(a[i]<=60) p=p+1;
		else q=q+1;
	}
	printf("1-18: %.2f%%\n",100*m/n);
	printf("19-35: %.2f%%\n",100*j/n);
	printf("36-60: %.2f%%\n",100*p/n);
	printf("60??: %.2f%%\n",100*q/n);
}