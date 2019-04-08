int main()
{
	int a1,a2,b1,b2,c1,c2;//????????
	for (a1=1;a1<=3;a1++)
		for (b1=1;b1<=3;b1++)
			for (c1=1;c1<=3;c1++)
				if ((a1!=b1)&&(b1!=c1)&&(c1!=a1))
				{
					a2=(b1>a1)+(c1==a1);//???????
					b2=(a1>b1)+(a1>c1);
					c2=(c1>b1)+(b1>a1);
					if ((a1+a2==b1+b2)&&(b1+b2==c1+c2))//????
					{
						if (a1==1) cout<<'A';//???????
						if (b1==1) cout<<'B';
						if (c1==1) cout<<'C';
						if (a1==2) cout<<'A';
						if (b1==2) cout<<'B';
						if (c1==2) cout<<'C';
						if (a1==3) cout<<'A';
						if (b1==3) cout<<'B';
						if (c1==3) cout<<'C';
					}
				}
	cout<<endl;
	return 0;
}