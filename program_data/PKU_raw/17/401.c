int findl(int i,char a[102],int n);
int find(int i,char a[102]);
int main()
{
	char a[102];
	memset (a,'\n',102);
	while(cin >>a)
	{
		int n=strlen(a);
		cout <<a <<endl;
		for (int i=0;i<n;i++)
		{
			int x=0;
			if (a[i]=='('&&findl(i,a,n)>n) cout <<"$";        //????
			else if (a[i]==')'&&find(i,a)<0) cout <<'?';
			else cout <<" ";
		}
		cout <<endl;
	}
}
int findl(int i,char a[102],int n)               //????????
{
	int k=i+1;
	while (k<n)
	{
		if (a[k]=='(') k=findl(k,a,n);           //????????????
		else if (a[k]==')') return k;
		k++;
	}
	return n+1;
}
int find(int i,char a[102])                       //???????
{
	int k=i-1;
	while (k>=0)
	{
		if (a[k]==')') k=find (k,a);
		else if (a[k]=='(') return k;
		k--;
	}
	return -1;
}