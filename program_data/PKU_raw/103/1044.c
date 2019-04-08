int main()
{
	char str[1000];
	scanf("%s",str);

	//?????????
{
	int i=0;
	while (str[i]!='\0')
	{
		if (str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-'a'+'A';
		}
		i++;
	}
}
	//samechar??????samecount?????
	char samechar[1000];
	int samecount[1000]={0};
	char tmp;
	tmp=str[0];
	//jishu?samechar?????
	int jishu=0;
	int i1;
	for(i1=0;str[i1]!='\0';i1++)
	{
		if(tmp==str[i1])
		{
			samechar[jishu]=tmp;
			samecount[jishu]++;
		}
		else
		{
			tmp=str[i1];
			jishu++;
			samechar[jishu]=tmp;
			samecount[jishu]++;
		}
	}
	//????
	int i2;
	for(i2=0;i2<=jishu;i2++)
	{
		printf("(%c,%d)",samechar[i2],samecount[i2]);
	}
	return 0;
}
