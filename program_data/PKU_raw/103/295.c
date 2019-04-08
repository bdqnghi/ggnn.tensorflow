
int main()
{
	char str[1001];

	cin.getline(str,1001);

	int i,counter=0;
	char alp[1000]={0};
	int num[1000]={0};
	int flag=0;

	for (i=0;str[i]!='\0';i++)
	{
		if (str[i]>='a'&& str[i]<='z')
			str[i]=str[i]-'a'+'A';
		if (str[i]==alp[counter])
			num[counter]++;
		else
		{
			counter++;
			alp[counter]=str[i];
			num[counter]++;
		}
	}

	for (i=1;i<=counter;i++)
	{
		cout<<'('<<alp[i]<<','<<num[i]<<')';
	}


	return 0;
}
