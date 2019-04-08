int main()
{
	char str[101];
	while(cin.getline(str,101,'\n'))
	{
		char k[101]={0},ts[101]={0};
		int i,t,num[101]={0},temp=0;
		for(i=0;str[i]!='\0';i++)
		{
			k[i]=' ';
			ts[i]=str[i];
			if(str[i]=='(')
				temp++;
			if(str[i]==')')
				temp--;
			if(temp<0)
			{
				k[i]='?';
				str[i]=' ';
				temp++;
			}
		}
		t=i-1;
		temp=0;
		for(i=t;i>=0;i--)
		{
			if(str[i]==')')
				temp++;
			if(str[i]=='(')
				temp--;
			if(temp<0)
			{
				k[i]='$';
				str[i]=' ';
				temp++;
			}
		}
		cout<<ts<<endl<<k<<endl;
	}
	return 0;
}