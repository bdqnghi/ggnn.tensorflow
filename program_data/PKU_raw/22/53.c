void main()
{	
	int k,i,j=0,a[300],t;
	char c[1800];
	gets(c);
	for(i=0;i<300;i++)
		a[i]=0;
	for(i=0;c[i]!='\0';i++)
	{	
		if(c[i]!=',')
			a[j]=a[j]*10+c[i]-48;
		if(c[i]==',')
			j=j+1;
	}
	for(i=0;i<=j;i++)
	{	
		for(k=i+1;k<=j;k++)
			if(a[i]<=a[k])
			{	
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}
	}
	t=0;
	for(i=0;i<=j;i++)
	{	
		if(a[i]!=a[0])
		{
			printf("%d",a[i]);
			break;
		}
		else
			t=t+1;
	}
	if(t==j+1)
		printf("No");
}





	


