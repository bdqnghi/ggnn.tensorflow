int main()
{
	int words[6],a,b,c,d,e,rank[6];

	for(a=1;a<6;a++)
	{
		for(b=1;b<6;b++)
		{
			if(a==b) continue;
			for(c=1;c<6;c++)
			{
				if(a==c||b==c)continue;
				for(d=1;d<6;d++)
				{
					if(a==d||b==d||c==d)continue;
					for(e=1;e<6;e++)
					{
						if(a==e||b==e||c==e||d==e)continue;
						{
							words[a]=(e==1);
							words[b]=(b==2);
							words[c]=(a==5);
							words[d]=(c!=1);
							words[e]=(d==1);
							if((words[a]+words[b]+words[c]+words[d]+words[e])==2&&((e!=2)+(e!=3))==2)
							{
								rank[a]=a;rank[b]=b;rank[c]=c;rank[d]=d;rank[e]=e;
								if(words[rank[1]]+words[rank[2]]==2)
									cout <<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
								
							}
						}
					}
				}
			}
		}
		
	}
   return 0;
}