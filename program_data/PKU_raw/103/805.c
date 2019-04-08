int main()
{
	char ch[1000]={'\0'};
	int num=0,length=0,i,k=0;
	char result;
	cin.getline(ch,1000);						//?????
	for (i=0;i<1000;i++)
		if (ch[i]!='\0')
			num++;								//?????
	if (num==1)
	{
		if ((ch[0]>='A')&&(ch[0]<='Z'))
			k=ch[0]-'A';
		else
			k=ch[0]-'a';
		result='A'+k;
		cout<<"("<<result<<","<<"1"<<")";
	}
	else
	{
		for (i=0;i<num-2;i++)
		{
			if ((ch[i]==ch[i+1])||(ch[i+1]-ch[i]==32)||(ch[i]-ch[i+1]==32))//????????????????????
				length++;
			else									//????????????
			{
				length++;
				if ((ch[i]>='A')&&(ch[i]<='Z'))
					k=ch[i]-'A';
				else
					k=ch[i]-'a';
				result='A'+k;
				cout<<"("<<result<<","<<length<<")";
				length=0;
				k=0;
				result='\0';
			}
		}
		if ((ch[num-2]==ch[num-1])||(ch[num-2]-ch[num-1]==32)||(ch[num-1]-ch[num-2]==32))
		{
			length=length+2;
			if ((ch[num-1]>='A')&&(ch[num-1]<='Z'))
				k=ch[num-1]-'A';
			else
				k=ch[num-1]-'a';
			result='A'+k;
			cout<<"("<<result<<","<<length<<")";
		}
		else
		{
			length++;
			if ((ch[num-2]>='A')&&(ch[num-2]<='Z'))
				k=ch[num-2]-'A';
			else
				k=ch[num-2]-'a';
			result='A'+k;
			cout<<"("<<result<<","<<length<<")";
			if ((ch[num-1]>='A')&&(ch[num-1]<='Z'))
				k=ch[num-1]-'A';
			else
				k=ch[num-1]-'a';
			result='A'+k;
			cout<<"("<<result<<","<<"1"<<")";
		}
	}
	return 0;
}