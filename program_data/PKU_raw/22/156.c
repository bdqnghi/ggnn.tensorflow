int checkNum(char c)
{
	if(c>=48 && c<=57)
		return 1;
	else
		return 0;
}
void change(int *p,int *q)
{
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
}

main()
{
	char s[1000];
	int i,j,t,a[500],count=0;
	scanf("%s",s);
	i=0;
	while(s[i]!='\0')
	{
		if(!checkNum(s[i]))
		{
			i++;
			continue;
		}
		else
		{
			t=0;
			while(checkNum(s[i]))
			{
				t=t*10+s[i]-48;
				i++;
			}
			a[count]=t;
			count++;
		}
	}
	if(count==1)
		printf("No\n");
	else
	{
		for(i=0;i<count-1;i++)
			for(j=i+1;j<count;j++)
				if(a[i]>a[j])
						change(&a[i],&a[j]);
		i=count-2;
		j=i+1;
		while(a[j]==a[i]&&i>=0)
		{
			i--;
		}
		if(i<0)
			printf("No\n");
		else
			printf("%d\n",a[i]);
	}
}
