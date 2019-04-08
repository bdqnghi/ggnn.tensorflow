int main()
{
	int a,b,c,d,e;
	for (a=1;a<=5;a++)
		for (b=1;b<=5;b++)
			for (c=1;c<=5;c++)
				for (d=1;d<=5;d++)
					for (e=1;e<=5;e++)
					{
						if (a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e&&b==2&&c==1&&(a==5)==1&&d!=1&&e!=2&&e!=3)
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
					}
			
	

	
	return 0;
}


