void main()
{
	unsigned int max2,max1, a[300]={0},i=0;
	int flag=0,j;
	char c;
	while((c=getchar())!='\n')
	{
		if(c>='0'&&c<='9')
				a[i]=a[i]*10+c-'0';
		else if(c==',')
			i=i+1;
	}


	max1=a[0];max2=0;
	for(j=0;j<=i;j++)
	{
		if(a[j]!=max1)
			flag=1;
		if(a[j]>max1)
			max1=a[j];
		}
		for(j=0;j<=i;j++)
			if(a[j]>max2&&a[j]!=max1)
				max2=a[j];

		
		if(flag==1)
			printf("%d",max2);
		else
			printf("No");
}