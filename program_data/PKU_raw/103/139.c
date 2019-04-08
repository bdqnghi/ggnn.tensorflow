int main()
{
	char num[100];
	for(int i=0;i<100;i++)
	{
		num[i]='0';
	}
	scanf("%s",num);
	for(int i=0;i<100;i++)
	{
		if(num[i]=='0')
		{
			num[i-1]='0';
			break;
		}
	}
	char currChar=num[0];
	if(currChar>='a')
	{
		currChar-='a';
	}
	else
	{
		currChar-='A';
	}
	int count=1;
	int step=0;
	char outChar[100];
	int outNum[100];
	int i=1;
	while(num[i]!='0')
	{
		char nowChar=num[i];
		if(nowChar>='a')
		{
			nowChar-='a';
		}
		else
		{
			nowChar-='A';
		}
		if(currChar==nowChar)
		{
			count++;
		}
		else
		{
			outChar[step]=currChar;
			outNum[step]=count;
			count=1;
			step++;
			currChar=nowChar;
		}
		i++;
	}
	outChar[step]=currChar;
	outNum[step]=count;
	count=0;
	step++;

	for(int j=0;j<step;j++)
	{
		printf("(%c,%d)",outChar[j]+'A',outNum[j]);
	}

	return 0;
}