char   da[30]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char xiao[30]={"abcdefghijklmnopqrstuvwxyz"};
char a[1000];
int num(char p)
{
	int m;
	for(m = 0;m < 26;m++)
		if(p == da[m] || p==xiao[m])
			return m;
		return 1000;
}
int main()
{
	
	cin >> a;
	int i,j,len=1;
	for(i = 0; a[i] != '\0' ;i++)
	{
		for(j = i+1;;j++)
		{
			if(num(a[j])==num(a[i]))
				len++;
			else
				break;

		}
		cout << "(" << da[num(a[i])] << ","<<len<<")";
		len = 1;
		i = j - 1;
	}
	return 0;
}
 

