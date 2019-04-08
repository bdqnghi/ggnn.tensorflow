int main ()
{
	int a,b,c,d,e,words[10],rank[10];
	for (a=1;a<6;a++)
	{
		for (b=1;b<6;b++)
		{
			if (a==b)
				continue;
			for (c=1;c<6;c++)
			{
				if (a==c||b==c)
					continue;
				for (d=1;d<6;d++)
				{
					if (a==d||b==d||c==d)
						continue;
					for (e=1;e<6;e++)
					{
						if (a==e||b==e||c==e||d==e)
							continue;
						else if (e==2||e==3)
							continue;
						else
						{
							rank[a]=words[1]=(e==1);
							rank[b]=words[2]=(b==2);
							rank[c]=words[3]=(a==5);
							rank[d]=words[4]=(c!=1);
							rank[e]=words[5]=(d==1);

							if (rank[1]==1&&rank[2]==1&&rank[3]==0&&rank[4]==0&&rank[5]==0)
							//???????
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}