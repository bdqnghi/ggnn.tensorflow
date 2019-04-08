void f(char a[],int,int);//??????????a
void g(char a[]);//?????????????????
int main()
{
	char str[100][101];
	int i,n=0,j;
	while(cin.getline(str[n++],101))//??
	{}
	for(i=0;i<n;i++)
	{
		cout<<str[i]<<endl;
		for(j=0;j<strlen(str[i]);j++)
		{
			if(str[i][j]==')')//?????????
			{
				f(str[i],j-1,j);
			}
		}
		g(str[i]);
		cout<<str[i]<<endl;
	}
	return 0;
}
void f(char a[],int x,int y)
{
	if(a[x]=='(')//??? ??????? ? ???
		a[x]=a[y]='a';
	else if(x>0)//????
		f(a,x-1,y);
}
void g(char a[])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='(')
			a[i]='$';
		else if(a[i]==')')
			a[i]='?';
		else 
			a[i]=' ';
	}
}
