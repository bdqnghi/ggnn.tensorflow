void main()
{
	int z,i,j,k,temp,a[300]={0};
	char str[1500]={'\0'};
	gets(str);
	z=strlen(str);
	j=0;
	for (i=0;i<z;i++)
	{
		if (str[i]!=',')
			a[j]=a[j]*10+str[i]-'0';
		else 
			j++;
	}
	if (j==1)
		printf("No");
    else
	{
		for (i=0;i<=j;i++)
			for (k=i+1;k<=j;k++)
				if (a[i]<a[k])
				{
					temp=a[i];
					a[i]=a[k];
					a[k]=temp;
				}
		if (a[0]==a[j])
			printf("No");
		else
		{
			z=a[0];
			i=0;
			do
			{
				i++;
			}
			while (a[i]==z);
				printf("%d",a[i]);
		}
	}

	

	


}