struct student
{
	char num[10];
	int age;
}line[100];
void main()
{
	int n,i,j,k,temp=0,m,e;
	scanf("%d",&n);
	int a[100]={0},b[100]={0};
	char s[100][10],y[100][10];
	char exchange[10];
	for(i=0;i<n;i++)
	{
		scanf("%s%d",line[i].num,&line[i].age);
	}
	for(i=0;i<n;i++)
	{
		if(line[i].age>=60)
		{
			temp++;
		}
	}
	j=0;
	for(i=0;i<n;i++)
	{
			if(line[i].age>=60)
			{
				strcpy(s[j],line[i].num);
				b[j]=line[i].age;
				j++;
			}

	}
	for(j=0;j<temp;j++)
	{
		for(k=0;k<temp-j;k++)
		{
			if(b[k]<b[k+1])
			{
				e=b[k];
				b[k]=b[k+1];
				b[k+1]=e;
				strcpy(exchange,s[k]);
				strcpy(s[k],s[k+1]);
                strcpy(s[k+1],exchange);
			}
		}
	}
	for(j=0;j<temp;j++)
	{
		printf("%s\n",s[j]);
	}
	m=0;
	for(i=0;i<n;i++)
	{
			if(line[i].age<60)
			{
				strcpy(y[m],line[i].num);
				m++;
			}
	}
    for(j=0;j<n-temp;j++)
	{
	     printf("%s\n",y[j]);
	}
				
	
}