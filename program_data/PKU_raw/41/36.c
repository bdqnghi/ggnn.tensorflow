
int main()
{
	int w[6];
	char r[6];
	int a,b,c,d,e,i;
	for(a=1;a<=5;a++)
		for(b=1;b<=5;b++)
		{
			if(b==a)continue;
			for(c=1;c<=5;c++)
			{
				if(c==a||c==b)continue;
				for(d=1;d<=5;d++)
				{
					if(d==a||d==b||d==c)continue;
					for(e=1;e<=5;e++)
					{
						if(e==a||e==b||e==c||e==d||e==2||e==3)continue;
						w[a]=(e==1);
						w[b]=(b==2);
						w[c]=(a==5);
						w[d]=(c!=1);
						w[e]=(d==1);
						if(w[1]==1&&w[2]==1&&w[3]==0&&w[4]==0&&w[5]==0)
						{
							r[a]='A';r[b]='B';r[c]='C';r[d]='D';r[e]='E';
							cout << a<<" ";
							cout << b<<" ";
							cout << c<<" ";
							cout << d<<" ";
							cout << e;

						}
					}
				}
			}
		}

	return 0;
}