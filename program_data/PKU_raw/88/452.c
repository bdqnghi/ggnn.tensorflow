/*???????4
  ????00948344 ??
  ?????2010//12/31
*/


int main()
{
	char str[31];
	gets(str);
	int len=strlen(str);
	int i,j;
	for(i=0;i<len;i++)
	{   
		if(str[i]=='0'&&str[i+1]=='0')
			continue;
		else if((str[i]=='0')&&((str[i+1]<'0')||(str[i+1]>'9')))
		{
			cout<<"0"<<endl;
		}
		else if(str[i]>'0'&&str[i]<='9')
		{
			for(j=i;j<len;j++)
			{
				if(str[j]<'0'||str[j]>'9')
				{
					i=j-1;
					break;
				}
				if(j==len-1)
					i=j;
				cout<<str[j];
			}
		    cout<<endl;
		}
	}
	return 0;
}