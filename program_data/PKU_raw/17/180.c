int main()
{	//int l,t=0;
	char string1[101];
	while(cin.getline(string1,101))
	{//t=0;
	
	cout<<string1<<endl;

	for(int i=1;i<strlen(string1);i++)
	{
		if(string1[i]==')')
	{	
//			if(t==0)
//			{
//				l=i;t=1;
//			}
			for(int j=i-1;j>=0;j--)
			{
				if(string1[j]=='(')
				{	//l=j;
					string1[i]=' ';
					string1[j]=' ';
					break;
				}
			}
		}
		
	}
for(int k=0;k<strlen(string1);k++)
	{
		if(string1[k]=='(')
			cout<<"$";
		else if(string1[k]==')')
			cout<<"?";
		else 
			cout<<" ";
	}
	cout<<endl;
	}
	return 0;
}

