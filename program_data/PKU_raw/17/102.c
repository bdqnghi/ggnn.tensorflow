int main()
{
	char str[200];
	int i,j,k,m,n;
	int flag=0;
	int left[100],l=1;
	while(cin>>str)
	{
		cout<<str<<endl;
		flag=0;l=1;
		for(n=1;n<100;n++)
			left[n]=0;		
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]=='(')
			{
				left[l]=i;
				l++;
			}
			if(str[i]!='('&&str[i]!=')')str[i]=' ';
		}
		for(j=l-1;j>=1;j--)
		{
			flag=0;
			for(k=left[j]+1;str[k]!='\0';k++)
			{
				if(str[k]==')')
				{
					str[left[j]]=' ';
					str[k]=' ';
					flag=1;
					break;
				}
			}
			if(flag==0)str[left[j]]='$';
		}
		for(m=0;str[m]!='\0';m++)
			if(str[m]==')')str[m]='?';
		cout<<str<<endl;
	}
	return 0;
}