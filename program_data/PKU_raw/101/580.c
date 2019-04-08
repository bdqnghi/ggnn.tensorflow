int main()
{
	int x1,x2,x3,x4,x5,x6,a,b,c,t[3];
	for (a=0;a<=2;a++)
		for (b=0;b<=2;b++)
			for (c=0;c<=2;c++)
			{
				x1=(b>a);
				x2=(c==a);
				x3=(a>b);
				x4=(a>c);
				x5=(c>b);
				x6=(b>a);
				t[0]=x1+x2;
				t[1]=x3+x4;
				t[2]=x5+x6;
				if (t[0]==2-a&&t[1]==2-b&&t[2]==2-c)
				{
					if (t[0]>t[1]&&t[0]>t[2])
					{
						cout<<"A";
						if (t[1]>t[2])
							cout<<"BC";
						else cout<<"CB";
						return -1;
					}
					if (t[1]>t[0]&&t[1]>t[2])
					{
						cout<<"B";
						if (t[0]>t[2])
							cout<<"AC";
						else cout<<"CA";
						return -1;
					}
					if (t[2]>t[1]&&t[2]>t[0])
					{
						cout<<"C";
						if (t[1]>t[0])
							cout<<"BA";
						else cout<<"AB";
						return -1;
					}
				}
			}
			return 0;
}
