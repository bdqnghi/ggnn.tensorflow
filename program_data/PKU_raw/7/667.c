void main()
{
	char a[100],b[100],c[100];
	gets(a);
	gets(b);
	gets(c);
	int i=0,j=0,n1=0,n2=0,k=0;
	while(b[i]!='\0')
	{
		i++;
		n1++;
	}
	i=0;
	while(c[i]!='\0')
	{
		i++;
		n2++;
	}

	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;j<n1;j++)
		{
			if(a[i+j]!=b[j])
				break;
			if(j==n1-1)
			{
				for(j=0;j<i;j++)
					printf("%c",a[j]);
				printf("%s",c);
				for(j=i+n2;a[j]!='\0';j++)
					printf("%c",a[j]);
				k++;
				
			}
		}if(k!=0)break;
	}

if(k==0)printf("%s",a);


}
