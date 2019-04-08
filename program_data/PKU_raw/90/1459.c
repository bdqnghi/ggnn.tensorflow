
int result;

void function(int apple,int dish,int min)
{
	if(dish==0&&apple==0)
		result++;
	if(dish==0&&apple!=0||apple==0&&dish!=0||apple<min)
		return;
	for(int k=min;k<=apple/dish;k++)
		function(apple-k,dish-1,k);
}

int main()
{
	int n;
	int apple,dish;
	cin>>n;
	while(n--)
	{
		cin>>apple>>dish;
		function(apple,dish,0);
		cout<<result<<endl;
		result=0;
	}
	return 0;
}
		