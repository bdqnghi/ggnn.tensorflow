void main()
{
	unsigned int a[30000],i,j,k,l=0,m,temp;
	char b[30000];
	for(i=0;i<30000;i++)
	{
		scanf("%d%c",&a[i],&b[i]);
		if(b[i]==',')
			continue;
		else
			break;
	}
	if(i==0)
		printf("No");
	else 
	{
		for(j=1;j<=i;j++)
		{
			if(a[j]==a[j-1])
				l++;
		}
		if(l==i)
			printf("No");
		else
		{
			for(j=1;j<=i;j++)
		  {
		    for(k=0;k<=i-j;k++)
			{
			if(a[k]<a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
			}
		  }
		  for(m=1;m<=i;)

		  {
			  
			  if(a[m-1]>a[m])
			  {
				  printf("%d",a[m]);
				  break;
			  }
			  else
				  m++;
		  }
		}
	}
}