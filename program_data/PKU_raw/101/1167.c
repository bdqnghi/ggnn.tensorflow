int main()
{
	int A,B,C,a,b,c;
	for(A=1;A<=3;A++)
	{
		for(B=1;B<=3;B++)
		{
			for(C=1;C<=3;C++)
			{
				a=(B>A)+(C==A);
				b=(A>B)+(A>C);
				c=(C>B)+(B>A);
				if(a>b&&b>c)
				{
					cout<<"CBA"<<endl;
					return 0;
				}
				if(a>c&&c>b)
				{
					cout<<"BCA"<<endl;
					return 0;
				}
				if(b>a&&a>c)
				{
					cout<<"CAB"<<endl;
					return 0;
				}
				if(b>c&&c>a)
				{
					cout<<"ACB"<<endl;
					return 0;
				}
				if(c>a&&a>b)
				{
					cout<<"BAC"<<endl;
					return 0;
				}
				if(c>b&&b>a)
				{
					cout<<"ABC"<<endl;
					return 0;
				}
			}
		}
	}
}
