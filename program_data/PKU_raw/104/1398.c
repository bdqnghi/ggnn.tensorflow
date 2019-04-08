
int same(int a,int b)
{
	if (a == 1||b == 1)
		return 1;
	else if (a == b)
		return a;
	else if (a>b)
    {
    	if (a%2 == 0) return same (a/2,b);
    	else return same((a-1)/2,b);
    }
    else if (b>a)
    {
    	if (b%2 == 0) return same (a,b/2);
    	else return same(a,(b-1)/2);
    }
	return 0;
}

int main(void)
{
	int x,y;
	cin>>x>>y;
	cout<<same(x,y)<<endl;
	return 0;
}