
int main(int argc, char* argv[])
{
	int N;cin>>N;
	for(int I=0;I<N;I++)
	{
		int i;
		char in[110];cin>>in;

		cout<<in<<endl; 
		int n=strlen(in);

		char mark[110]; for(i=0;i<n;i++) mark[i]=' ';
		
		int left=0;

		for(i=0;i<n;i++)
		{
			if(in[i]=='(') left++;

			else if(in[i]==')')
			{
				if(left)
				{left--;}
				else
				{
					mark[i]='?';
				}
			}
			
		}

		int right=0;
		for(i=n-1;i>=0;i--)
		{
			if(in[i]==')') right++;
			
			else if(in[i]=='(')
			{
				if(right)
				{right--;}
				else
				{
					mark[i]='$';
				}
			}
			
		}

		for(i=0;i<n;i++) cout<<mark[i];
		cout<<endl;
	}

	

	return 0;
}

