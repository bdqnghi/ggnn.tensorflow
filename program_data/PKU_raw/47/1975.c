int i=0;//???????????????
int num=1;
void nixu(int n)
{
	
	
	int a;
	cin>>a;
	i++;
	if(i!=n)
	{
		nixu(n);
	}
	if(num!=n)
	{
	cout<<a<<' ';
         num++;
	}
	else
	{
		cout<<a;
	}
		
	

}
int main()
{
	int n;
	cin>>n;
	getchar();
	nixu(n);
	return 0;
}

