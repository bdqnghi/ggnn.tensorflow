void main()
{

	char str[10000];
	int i,num[300],j,add=0,count=0,no,tag=0,flag,max;
	for(i=0;i<300;i++)
		num[i]=0;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==44)
			count++;
	}
	i=0;
	for(j=0;j<count;j++)
	{
		for(;str[i]!=44;i++)
		{
			add=add*10+str[i]-'0';
		}
		i++;
		num[j]=add;
		add=0;
	}
	for(;i<strlen(str);i++)
		num[j]=10*num[j]+str[i]-'0';
	/*for(i=0;i<=j;i++)
		printf("%d\n",num[i]);*/

	
if(j==1)
		printf("No\n");
	no=j+1;
	for(i=0,flag=1;i<no&&flag;i++)
	{
		if(num[i]!=num[0])
			flag=0;
	}
	if(flag) printf("No\n");
	else
	{
	    max=0;

		for(i=0;i<no;i++)
		{
			if(num[i]>=max)
			{
			max=num[i];
			tag=i;
			}
		}
	
		for(i=0;i<no;i++)
		{if(num[i]==num[tag])
		num[i]=0;}
		

		for(i=0,max=num[0];i<no;i++)
		{
			if(num[i]>max)
			{max=num[i];
			tag=i;}
		}
		printf("%d\n",max);
	}
}