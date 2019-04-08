int main()
{
	int rank[10],thought[10],a,b,c,d,e,i,k=0;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(a==b)
				continue;
            for(c=1;c<=5;c++)
			{
				if(a==c||b==c)
					continue;
                for(d=1;d<=5;d++)
				{
					if(a==d||b==d||c==d)
						continue;
                    for(e=1;e<=5;e++)
					{
						if(a==e||b==e||c==e||d==e||e==2||e==3)
							continue;
						thought[a]=(e==1);
						thought[b]=(b==2);
						thought[c]=(a==5);
						thought[d]=(c!=1);
						thought[e]=(d==1);
						if(thought[1]==1&&thought[2]==1&&thought[3]==0&&thought[4]==0&&thought[5]==0)
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
	for(i=1;i<=5;i++)
	{
		if(k==0)
		{
		cout<<rank[i];
		k++;
		}
		else if(k!=0)
        cout<<" "<<rank[i];
	}
	return 0;
}