int main()
{
	int words[6]={0};
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	for (a=1;a<=5;a++)
	{
		for (b=1;b<=5;b++)
		{
			if (b==a) continue;
			for (c=1;c<=5;c++)
			{
				if (c==a||c==b) continue;
				for (d=1;d<=5;d++)
				{
					if (d==a||d==b||d==c) continue;
					for (e=1;e<=5;e++)
					{
						if (e==a||e==b||e==c||e==d) continue;
						words[a]=(e==1);
						words[b]=(b==2);
						words[c]=(a==5);
						words[d]=(c!=1);
						words[e]=(d==1);
						if (words[1]==1 && words[2]==1 && words[3]==0&&words[4]==0&&words[5]==0&&e!=2&&e!=3)
						{
							cout <<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							break;
						}
					}
				}
			}
		}
	}
	return 0;
}