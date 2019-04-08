//???
int main()
{
	int a,b,c;
	for (a=1;a<=3;a++)//????
	{
		for (b=1;b<=3;b++)
		{
			if (b==a)
				continue;
			for (c=1;c<=3;c++)
			{
				if (c==a||c==b)
					continue;
				if (a==1)
					if (b<=a||c!=a)
						continue;
				if (a==2)
					if ((b>a&&c==a)||(b<=a&&c!=a))
						continue;
				if (a==3)
					if (b>a||c==a)
						continue;
				if (b==1)
					if (a<=b||a<=c)
						continue;
				if (b==2)
					if ((a<=b&&a<=c)||(a>b&&a>c))
						continue;
				if (b==3)
					if (a>b||a>c)
						continue;
				if (c==1)
					if (c<=b||c<=a)
						continue;
				if (c==2)
					if ((c<=b&&c<=a)||c>b&&c>a)
						continue;
				if (c==3)
					if (c>b||c>a)
						continue;
				if (a==1&&b==2&&c==3)//????????
					cout<<"ABC"<<endl;
				if (a==1&&b==3&&c==2)
					cout<<"ACB"<<endl;
				if (a==2&&b==1&&c==3)
					cout<<"BAC"<<endl;
				if (a==2&&b==3&&c==1)
					cout<<"CAB"<<endl;
				if (a==3&&b==1&&c==2)
					cout<<"BCA"<<endl;
				if (a==3&&b==2&&c==1)
					cout<<"CBA"<<endl;
				break;
			}
		}
	}
	return 0;
}