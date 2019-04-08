int main()
{
	int a,b,c,d,e,words[6],i;
	int rank[6];
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(a==b) continue;
			for(c=1;c<=5;c++)
			{
				if(a==c||b==c) continue;
				for(d=1;d<=5;d++)
				{
					if(a==d||b==d||c==d) continue;
					for(e=1;e<=5;e++)
					{
						if(a==e||b==e||c==e||d==e) continue;
							e!=2;
							e!=3;
							words[a]=(e==1);
							words[b]=(b==2);
							words[c]=(a==5);
							words[d]=(c!=1);
							words[e]=(d==1);
							if(words[1]==1&&words[2]==1&&words[3]==0&&words[4]==0&&words[5]==0&&e!=2&&e!=3)
							{
								rank[1]=a;
								rank[2]=b;
								rank[3]=c;
								rank[4]=d;
								rank[5]=e;
							}
					}
				}
			}
		}
	}
	for(i=1;i<5;i++)
		cout<<rank[i]<<" ";
	cout<<rank[i];




				
	return 0;
}

				


