int main()
{
	long int num10=0;//??????10?????b?????????
	int a,b,i,j;//a,b??,i,j???????????
	char character1[100],character2[100];//???????????
	cin>>a;
	cin.get();
	for(i=0;;i++)
	{
		character1[i]=cin.get();
		if(character1[i]>='a'&&character1[i]<='z')
			character1[i]=character1[i]-87;
		else if(character1[i]>='A'&&character1[i]<='Z')
			character1[i]=character1[i]-55;
		else if(character1[i]>='0'&&character1[i]<='9')
			character1[i]=character1[i]-48;
		else break;
		num10=num10*a+character1[i];
	}
	cin>>b;
	for(j=0;;j++)
	{
		if(num10%b<=9)
			character2[j]=num10%b+48;
		if(num10%b>9)
			character2[j]=num10%b+55;
		num10=num10/b;
		if(num10==0)
			break;
	}
	for(;j>=0;j--)
		cout<<character2[j];
	cout<<endl;
	cin.get();cin.get();cin.get();
    return 0;
}	