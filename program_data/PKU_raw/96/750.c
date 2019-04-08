int main()
{
	char number[100];
	char result[100];
	int a=0,b=0,lenght=0,flag=0;
	scanf("%s",number);
	lenght=strlen(number);
	b=number[0]-'0';
	for(int i=0;i<lenght-1;i++)
	{
		a=b*10+(number[i+1]-'0');
		result[i]=a/13+'0';
		b=a%13;
	}
	if(lenght==1)
	{
		result[0]='0';
		result[1]='\0';
	}
	else
	{
		result[lenght-1]='\0';
		for(int i=0;result[i]!='\0';i++)
			if(result[i]!='0'&&result[i]!='\0')
			{
				flag=i;
				break;
			}
	}
	printf("%s\n%d\n",result+flag,b);
	return 0;
}