int main()
{
	int i,k=1;
	char str[1001]={'\0'};
	gets(str);
	for(i=0;i<=1000;i++)
	{
		if(str[i]=='\0')
		{break;}
		if(str[i]!='\0')
		{
			if(str[i]>=97&&str[i]<=122)
			{str[i]=str[i]-32;}
			if(str[i+1]>=97&&str[i+1]<=122)
			{str[i+1]=str[i+1]-32;}
			if(str[i]==str[i+1])
			{
				k++;
			}
			if(str[i]!=str[i+1])
			{
				printf("(%c,%d)",str[i],k);
				k=1;
			}
		}
	}
}