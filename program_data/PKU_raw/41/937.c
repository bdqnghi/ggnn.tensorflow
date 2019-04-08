int main()
{
	int a,b,c,d,e,A,B,C,D,E;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			for(c=1;c<=5;c++)
			{
				for(d=1;d<=5;d++)
				{
					for(e=4;e<=5;e++)
					{
						if(e==2||e==3)
							break;
						A=(e==1);B=(b==2);C=(a==5);D=(c!=1);E=(d==1);
						if((a==1||a==2)&&A!=1)
							break;
						if((b==1||b==2)&&B!=1)
							break;
						if((c==1||c==2)&&C!=1)
							break;
						if((d==1||d==2)&&D!=1)
							break;
						if((e==1||e==2)&&E!=1)
							break;
						if(a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e&&A+B+C+D+E==2)
						{
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}
