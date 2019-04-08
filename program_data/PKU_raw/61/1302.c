
int fab(int);

int main()
{
	int n,a,i;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a;
		cout << fab(a) << endl;
	}
	return 0;
}

int fab(int a)
{
	if(a==1)return 1;
	else if(a==2)return 1;
	else
		return fab(a-1)+fab(a-2);
}