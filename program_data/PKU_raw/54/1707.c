int n;
int main()
{
	int k,i;
	cin>>n>>k;
	int apple(int a,int b,int c);
	for(i=1;;i++)
	{
		if(apple(i,n,k)==1)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
int apple(int a,int b,int c)
{
	int f;
	f=(a-c)/n;
	if(b==0)return 1;
	else if(f==0) return 0;
	else if((a-c)%n!=0)
		return 0;
	else return  apple(a-c-f,b-1,c);
}