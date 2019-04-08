int main()
{
	int a,b,c;//??????
	int true1,true2,true3;//????
	for (a=1;a<=3;a++)//????????
	{
		for (b=1;b<=3;b++)
		{
			for (c=1;c<=3;c++)
			{
				true1=(a<b)+(a==c);
				true2=(a>b)+(a>c);
				true3=(c>b)+(b>a);
				if (a>b&&b>c&&true3>true2&&true2>true1)
					cout<<"C"<<"B"<<"A";
				else if (a>c&&c>b&&true2>true3&&true3>true1)
					cout<<"B"<<"C"<<"A";
				else if (b>a&&a>c&&true3>true1&&true1>true2)
					cout<<"C"<<"A"<<"B";
				else if (b>c&&c>a&&true1>true3&&true3>true2)
					cout<<"C"<<"B"<<"A";
				else if (c>a&&a>b&&true2>true1&&true1>true3)
					cout<<"B"<<"A"<<"C";
				else if (c>b&&b>a&&true1>true2&&true2>true3)
					cout<<"A"<<"B"<<"C";
			}//????????????
		}
	}
	return 0;
}
