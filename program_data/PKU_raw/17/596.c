int a,t=0;
char A[110]={'\0'};
void cal(int m)
{
	while (t<=a)
	{
		if(A[t]=='(')
		{
			cal(t++);
		} 
 		else if(A[t]==')')
		{
		    A[m]='a';
		    A[t++]='a';
		    break;
		} 
                else
                    t++;
	}
}
int main()
{
	while(cin>>A)
	{
		char B[110];
		a=strlen(A)-1;
		for(int i=0;i<=a;i++)
			B[i]=A[i];
		t=0;
		while(t<=a) 
                    if (A[t++]=='(')
		{
			cal(t-1);
		}
		for(int i=0;i<=a;i++)
			cout<<B[i];
		cout<<'\n';
		for(int i=0;i<=a-1;i++)
		{
			if (A[i]=='(')
				cout<<'$';
			if (A[i]==')')
				cout<<'?';
			if (A[i]!='('&&A[i]!=')')
				cout<<" ";
		}
		if(A[a]=='(')
			cout<<'$'<<endl;
		if(A[a]==')')
			cout<<'?'<<endl;    
	    if(A[a]!='('&&A[a]!=')')
			cout<<" "<<endl;

	}
	return 0;
}