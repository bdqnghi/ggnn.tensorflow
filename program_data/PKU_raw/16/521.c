void fun(int s)
{
	if(s==0)
		return;
	else
	{
		cout<<s%10;
		fun(s/=10);
	}
}
int main()
{
	int s;
	cin>>s;
	if(s==0)
		cout<<s;
	else
	    fun(s);
    return 0;
}
 
