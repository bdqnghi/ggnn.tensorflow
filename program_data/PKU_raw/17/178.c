int main()
{
	char str[101];
	int temp;
	while(cin.getline(str,101,'\n'))
	{
		cout<<str<<endl;
		int k,i,s=0,t=0;
		char result[101];
		int left[101];
		memset(result,' ',sizeof(result));
		k=strlen(str);
		int p=0;
		for(i=0;i<k;i++)
		{
			if(str[i]=='(')
			{
				p++;
				left[s]=i;
				temp=s;
				s++;
			}
			if((str[i]==')')&&(p==0))
				result[i]='?';
			if((str[i]==')')&&(p!=0))
			{
				p--;
				left[temp]=-1;
				do
				{
					temp--;
				}
				while(left[temp]==-1);
			}
		}
		for(i=0;i<s;i++)
		{
			if(left[i]==-1)
				continue;
			else
				result[left[i]]='$';
		}
		for(i=0;i<k;i++)
			cout<<result[i];
		cout<<endl;
	}
	return 0;
}