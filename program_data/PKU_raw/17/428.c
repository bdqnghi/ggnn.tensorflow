int main()
{
	char str[100][102];
	int i,n=0,j,k,l;
	while(cin.getline(str[n++],102))
	{
		/*if(getchar()=='0')
			break;*/
	}
	for(i=0;i<n;i++)
	{
		j=0;
		cout<<str[i]<<endl;
		while(str[i][j]!='\0')
		{
			if(str[i][j]=='(')
			{
				k=j+1;
				while(str[i][k]!='\0')
				{
					if(str[i][k]==')')//"("????")"
					{
						break;
					}
					k++;
				}
				if(str[i][k]=='\0')
				{j++;continue;}
				l=k-1;
				while(true)//?????
				{
					if(str[i][l]=='(')
						break;
					l--;
				}
				str[i][l]=str[i][k]='a';//?????
			}
			if(str[i][j]!='(')
				j++;
			}
		j=0;
		while(str[i][j]!='\0')
		{
			if(str[i][j]=='(')
			{
				str[i][j]='$';
			}
			else if(str[i][j]==')')
			{
				str[i][j]='?';
			}
			else
				str[i][j]=' ';//???????
			j++;
		}
		cout<<str[i]<<endl;
	}
	return 0;
}
