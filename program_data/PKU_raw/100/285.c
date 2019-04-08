void main()
{
	char str[400],c;
	int n,i,j,a[400]={0},t;
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{   
		if(str[i]>='a'&&str[i]<='z')
		{
			for(j=i;j<n;j++)
				if(str[j]==str[i])
					a[i]++;
			for(j=i+1;j<n;j++)
				if(str[j]==str[i])
					str[j]='~';
		}
		else str[i]='~';
	}
	for(i=0;i<n;i++)
		if(a[i]!=0)
			break;
	if(i==n)
		printf("No\n");
	if(i<n)
	{
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{if(str[j]<str[i])
				{c=str[i];str[i]=str[j];str[j]=c;
				t=a[i];a[i]=a[j];a[j]=t;}
			}
		}
	}
        for(i=0;i<n;i++)
			if(a[i]!=0)
				printf("%c=%d\n",str[i],a[i]);
} 
