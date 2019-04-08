int main()
{
	char a[101];
	int i,num=1,j;
	while(cin.getline(a,101))
	{
		cout<<a<<endl;
		for(i=0;a[i]!='\0';i++)
		{
			num=1;
			if(a[i]!=')'&&a[i]!='(')
				cout<<" ";
			if(a[i]=='(')
			{
				if(a[i+1]=='\0')
				{
					cout<<"$";
					continue;
				}
				for(j=i+1;a[j]!='\0';j++)
				{
					if(a[j]=='(')
						num++;
					if(a[j]==')')
						num--;
					if(num==0)
					{
						cout<<" ";
						break;
					}
					if(a[j+1]=='\0'&&num!=0)
						cout<<"$";
				}
			}
			num=1;
			if(a[i]==')')
			{
				if(i==0)
				{
					cout<<"?";
					continue;
				}
				for(j=i-1;j>=0;j--)
				{
					if(a[j]==')')
						num++;
					if(a[j]=='(')
						num--;
					if(num==0)
					{
						cout<<" ";
						break;
					}
					if(j==0&&num!=0)
						cout<<"?";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}