void main()
{
	int a[300],i,j,k=0,d,t;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		d=i;
		if(getchar()=='\n')
			break;
	}
	if(i==0)
		printf("No\n");
	else
	{	for(i=0;i<d;i++)
		for(j=i+1;j<=d;j++)
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;k++;
			}
	if(k>0)
	{
		for(i=0;;i++)
		{
			if(a[i]!=a[i+1]) break;
		}
		printf("%d",a[i+1]);
        }
 	else 
		printf("No\n");
	}
}
		
    