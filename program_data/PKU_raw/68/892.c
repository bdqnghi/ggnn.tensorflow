
int judge(int a)
{
	int i;
	
	for(i=3;i<=sqrt((float)a)+1;i+=2)
	{
		if(a%i == 0)
		{
			return 0;
			break;
		}
	}
	if(i>sqrt((float)a)+1 )
		return 1;
}

int main()
{
	int i,j,n;
	cin >>n;

	//for(i=3;i<=200;i+=2)
	//	cout <<i<<"?"<<judge(i)<<endl;

	for (i=6;i<=n;i+=2)
	{
		for(j=3;j<= i/2+1 ;j+=2)
		{
			if(judge(j) ==1 && judge(i-j)==1)
			{
				cout << i<<'='<<j<<'+'<<i-j<<endl;
				break;
			}
		}
	}
	return 0;
}
