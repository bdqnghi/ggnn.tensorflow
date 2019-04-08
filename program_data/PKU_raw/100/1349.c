int main()
{
	char str[300],*p,a[300],c;
	int i=0,j,k,b[300];
	scanf("%s",str);
	for(p=str;*p!='\0';p++)
	{
		if(*p>='a'&&*p<='z')
		{
			a[i]=*p;
			i++;
		}
	}
	if(i==0)
	{
		printf("No");
		return 0;
	}

	for(j=0;j<i;j++)
	{
		for(k=j+1;k<i;k++)
		{
			if(a[j]>a[k])
			{
				c=a[j];
				a[j]=a[k];
				a[k]=c;
			}
		}
	}


	for(j=0;j<i;j++)
	{
		b[j]=1;
		for(k=j+1;k<i;k++)
		{
			if(a[j]==a[k])
			{
				b[j]++;
				a[k]='0';
			}
		}
	}

	for(j=0;j<i;j++)
	{
		if(a[j]!='0')
		{
			printf("%c=%d\n",a[j],b[j]);
		}
	}

	return 0;
}





