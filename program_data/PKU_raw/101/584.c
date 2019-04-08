int main()
{
	int a,b,c;
	int d[3];
	char e[3];
	for(a=0;a<3;a++)
		for(b=0;b<3;b++)
			if(b!=a)
				for(c=0;c<3;c++)
					if(c!=a&&c!=b)
					{
						d[a]=(b>a)+(c==a)+a;
						d[b]=(a>b)+(a>c)+b;
						d[c]=(c>b)+(b>a)+c;
						if(d[a]==2&&d[b]==2&&d[c]==2)
						{
							e[a]='A';
							e[b]='B';
							e[c]='C';
							for(int i=0;i<=2;i++)
								cout<<e[i];
						}
					}
	return 0;		
}