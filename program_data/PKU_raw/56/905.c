void main()
{
	int a[5],m,i,k=0;
	scanf("%d",&m);
	for(i=0;i<5;i++)
	{
		a[i]=m%10;
	    m=m/10;
	}
	for(i=0;i<5;i++)
	{
		if(a[i]!=0)
			k++;
	}
    a[i]=a[k-1-i];

	i=0;
	do
	{
	if(a[i]!=0)
		printf("%d",a[i]);
	i++;
	}
    while(i<5);

	
	
}

	
