int prime(int);
int main()
{
	int a,b,c;
	for(int a=1;a<=3;a++)
	{
		for(int b=1;b<=3;b++)
		{
			if(b==a) continue;
			for(int c=1;c<=3;c++)
			{
				if(c==a||c==b) continue;
				int A=(b>a)+(c==a);
				int B=(a>b)+(a>c);
				int C=(c>b)+(b>a);
				if(A+a==3&&B+b==3&&C+c==3)
					for(int i=1;i<=3;i++)
					{
						if(i==a)
							cout<<"A";
						if(i==b)
							cout<<"B";
						if(i==c)
							cout<<"C";
					}
			}
		}
	}
	return 0;
}