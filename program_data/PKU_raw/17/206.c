int main()
{
	char word[101]={"0"},temp[101]={"0"};
	int len=0,i=0,j=0,s=0;
	while(cin.getline(word,101))
	{
		cout<<word<<endl;
        len=strlen(word);
		for(i=0;i<len;i++)
			temp[i]=' ';
		temp[i]='\0';
		for(i=0;i<len;i++)              //???????????
		{
			if(word[i]=='(')temp[i]='$';
            if(word[i]==')')temp[i]='?';
		}
		for(i=0;i<len;i++)
		{
			s=1;
			if(word[i]=='(')          //?????????
			{
				
				for(j=i+1;j<len;j++)
				{
					if(word[j]=='(')
						s++;
					if(word[j]==')')
						s--;
					if(s==0)
					{
						temp[i]=' ';
						temp[j]=' ';
						break;
					}
				}
			}
		}
		cout<<temp<<endl;
		strcpy(temp,"0");
	}
	return 0;
}