void main()
{
	unsigned int a[50],m2,i,k,max;
    scanf("%d",&a[0]);
	for(i=1;getchar()!='\n';i++)
		scanf("%d",&a[i]);
	max=a[0];
	for(k=0;k<i;k++)
		if(a[k]>max)
			max=a[k];
	for(k=0;k<i;k++)
		if(a[k]==max)
		a[k]=0;
	m2=0;
	for(k=0;k<i;k++)
		if(a[k]>m2)
			m2=a[k];
	if(m2!=0)
	printf("%d",m2);
	else
		printf("No");

	   
	   
		   
	   
   
   
	
}

