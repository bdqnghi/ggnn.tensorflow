int main()
{
	int a,b,c,d,e;
	int pa=0,pb=0,pc=0,pd=0,pe=0;
	int la,lb,lc,ld,le;
	for ( a=1;a<=5;a++ )
	{
		for ( b=1;b<=5;b++ )
		{
			for ( c=1;c<=5;c++ )
			{
				for ( d=1;d<=5;d++ )
				{
					for ( e=1;e<=5;e++ )
					{
						if ( e==2 || e==3 ) continue;
						
						la=(e==1);lb=(b==2);lc=(a==5);ld=(c!=1);le=(d==1);
						if ( la+lb+lc+ld+le == 2 && a!=c&&a!=d&&c!=d&&b!=c&&b!=d&&a!=e&&d!=e&&c!=e )
						{
							if ( (c==1&&lc==1&&b==2&&lb==1)||(c==1&&lc==1&&d==2&&ld==1)||(d==1&&ld==1&&b==2&&lb==1)||
								(d==1&&ld==1&&c==2&&lc==1) )
							{pa=a;pb=b;pc=c;pd=d;pe=e;}
						}
						
					}
				}
			}
		}
	}
	cout << pa << " " << pb << " " << pc << " " << pd << " " << pe <<endl;
	return 0;
}
