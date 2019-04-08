int x=0;
int main()
{
	char a[100];
	int N(char a[],char f);
	cin.getline(a,100);
	char m1;
	m1=a[0];
	N(a,m1);
}
int N(char a[],char f)
{
	char m=f;
    lop:
	if(a[x]==m)
	{
		int l=x;
		x++;
		cout<<l<<" "<<N(a,m)<<endl;
		goto lop;
	}
	if(a[x]!=m&&a[x]!='\0')
	{
		x++;
		return x-1;
	}

	if(a[x]=='\0')
	return 0;
}