void main()
{
	int i,j=0,k=0;
	char a[100];
	for(i=0;;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
			break;
	}
	j=i;
	for(i=0;i<j;i++)
	{
		if(a[i]>'Z')
		a[i]=a[i]-32;
    }
	for(i=0;i<j;i++)
	{
		k+=1;
		if(a[i+1]!=a[i])
		{	
			printf("(%c,%d)",a[i],k);
			k=0;
		}
	}
}
	






