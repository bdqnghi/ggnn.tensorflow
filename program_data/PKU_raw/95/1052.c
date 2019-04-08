

int main()
{
	char str[2][100];
	int i,n=0;
	cin.getline(str[0],99);
	cin.getline(str[1],99);
	for(i=0;str[0][i]!='\0'&&str[1][i]!='\0';i++)
	{   if(str[0][i]>96)
	       str[0][i]=str[0][i]-32;
	    if(str[1][i]>96)
	       str[1][i]=str[1][i]-32;
		if(str[0][i]==str[1][i])
			continue;
		else if(str[0][i]>str[1][i])
		{n++;cout<<">"<<endl;break;}
		else
		{n++;cout<<"<"<<endl;break;}
	}
	if(n==0)
		cout<<"=";
	return 0;
}