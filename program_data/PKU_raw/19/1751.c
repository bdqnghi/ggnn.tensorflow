int main()
{
	char ch[100][100],str1[100],str2[100];        //???????
	int i=0,j;                                   //?????
	do                                           //?????
	{
		cin>>ch[i];
		i++;
	}
	while(getchar()!='\n');
	cin>>str1>>str2;
	for(j=0;j<i;j++)
	{
		if(strcmp(str1,ch[j])==0)                //???????????????????
		{
			strcpy(ch[j],str2);
		}
	}
	for(j=0;j<i-1;j++)                           //??????
	{
		cout<<ch[j]<<" ";
	}
	cout<<ch[i-1];
    return 0;
}