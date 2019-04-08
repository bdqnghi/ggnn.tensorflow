void main()
{
	int a[300],i,j,flag=0,l,m=0,num=0,temp;  
	char str[1500];
	gets(str);
	l=strlen(str);
	for(i=0;i<=l;i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			m=m*10+str[i]-'0';
		}
		else
		{
			if(m!=0)
				flag++;
		}
		if(flag==1)
		{
			a[num++]=m;
			flag=0;
			m=0;
		}

	}
	if(num==1)
		printf("No");
	else if(num==2)
	{	
		if(a[0]!=a[1])	
			printf("%d",(a[0]<a[1])?a[0]:a[1]);
		else
			printf("No");
	}
	else
	{
		int *max;
		for(i=0;i<num-1;i++)
		{
			max=&a[i];
			for(j=num-1;j>i;j--)
			{
				if(a[j]>*max)
				{
					max=&a[j];
				}
			}
			if(*max!=a[i]);
			{
				temp=a[i];
				a[i]=*max;
				*max=temp;
			}
		}
		for(i=1;i<num;i++)
		{
			if(a[i]!=a[0])
			{
				printf("%d",a[i]);
				flag++;
				break;
			}
		}
		if(flag==0)
			printf("No");
	}
		
}