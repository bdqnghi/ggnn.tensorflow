void main()
{
	int a[5],b,k=0,i;
    scanf("%d",&b);
	for(i=0;;i++)
	{
		a[i]=b%10;
		b=b/10;
		k=k+1;
		if(b<1)
			break;
	}
	for(i=0;i<k;i++)
		printf("%d",a[i]);
}