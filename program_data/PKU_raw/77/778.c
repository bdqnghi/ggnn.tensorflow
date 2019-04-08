//****************************************
//*???????                            **
//*????? 1100013004                     **
//*???2010.11.21                          **
//****************************************
int i,j,n,flag = 0 ;
int match(int b[100])
{
	
	for (i = 0; i < 100;i++)
	{
		if(b[i] == 1)
			n = i;
		else
			if(b[i] == -1)
			{
				b[n] = 0;
				b[i] = 0;
				cout<<n<<' '<<i<<endl;
				break;
			}
	}
	return b[100];
}
int main() 
{
	char a[100];
	int b[100] = {0};
	cin.getline (a,100);
	for (i = 0;i < 100;i++)
	{
			if(a[i] == a[0])
				b[i] = 1;
			else
				b[i] = -1;
	}
	flag = 1;
	while (flag)
	{
		flag = 0;
		b[100] = match (b);
		for (i = 0;i < 100; i++)
			{
		        if (b[i] == 1)
				{
			        flag = 1;
				}
			}
	}
	return 0;
}