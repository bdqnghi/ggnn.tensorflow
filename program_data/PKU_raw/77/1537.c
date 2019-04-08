char c[100];
int match(int x)
{
	
	int q;
	if(c[x]==c[0])
	{
		q=match(x+1);
		cout<<x<<' '<<q<<endl;
		return match(q+1);
	}
	else
		return x;
}
int main()
{
	
	cin.getline(c,100);
	match(0);
	return 0;
}
