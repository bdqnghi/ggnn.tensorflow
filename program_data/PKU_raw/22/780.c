int main()
{
	int a[300]={0},b[5]={0},i,j,c,max,max2,k=1,l;
	for(i=0;i<=300;i++)
	{
		j=0;		
		while((c=getchar())!=',')
		{			
			if(c=='\n')
			   goto here;
			j=j*10+c-48;
			a[i]=j;
		}	
	}
here:
	l=i;
	for(i=1;i<=l;i++)
	{
		if(a[i]!=a[i-1])
			k=0;
	}
	if(k==1)
		printf("No");
	else if(a[1]==0)
		printf("No");
	else
	{
		max=a[0];
		for(i=1;i<=l;i++)
		{
			if(a[i]>max)
				max=a[i];
		}
		max2=0;
		for(i=0;i<=l;i++)
		{
			if(a[i]==max)
				continue;
			else if(a[i]>max2)
				max2=a[i];
		}
		printf("%d",max2);
	}
	return 0;
}