//********************************
//*???n-gram????    **
//*?????? 1300012757 **
//*???2013.12.12 **
//********************************
int n;
int num[200] = {0};   //????????????

void search(char (*s)[5],int j)
{
	extern int n,num[200];
	int count = 0;

	for(int i =1;i<j;i++)
		if(*(*(s+j)) == *(*(s+i)))
		{
			count = 1;
			for(int x = 1; x<n;x++)
			{
				if(*(*(s+j)+x) != *(*(s+i)+x))
					count = 0;
			}
			if( count  == 0)
				continue;
			else
			{
				(*(num+i)) ++;
				return;
			}
		}
	(*(num+j)) ++;
}

int main()
{
	extern int n,num[200];
	cin >> n;
	cin.get();      //???

	char s[200][5];
	char c[500];
	char *p = c;

	int i =1;
	while((*(p+i) = cin.get())!= '\n')      //?????
		i++;

	for(int j = 1; j <=i-n+1; j++)
	{
		for(int x= 0;x<n;x++)
		{
			*(*(s+j)+x) = *(p+j+x);
		}
		search(s,j);
	}
	int max = 0;
	for(int j = 1;j<=i-n+1;j++)
	{
		if(*(num + j) > max)
			max = *(num + j);
	}
	if(max  == 1)
		cout<<"NO"<<endl;
	else
	{
		cout<< max<<endl;
	for(int j = 1; j<i-n+1;j++)
	{
		if(*(num + j) == max)
			for(int x= 0;x<n;x++)
			cout<< *(*(s+j)+x);
		cout<<endl;
	}

	}
	return 0;
}
