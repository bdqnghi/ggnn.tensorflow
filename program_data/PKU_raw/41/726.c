/*
 * zhizhenlianxi.cpp
 *
 *  Created on: 2012-12-4
 *      Author: wenjun
 */
int main ()
{
	int a,b,c,d,e;
	int words[10],rank[10];
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{if(a==b) continue;
			for(c=1;c<=5;c++)
			{
			if(a==c||b==c) continue;
				for(d=1;d<=5;d++)
				{
				if(a== d || b == d|| c == d) continue;
					for(e=1;e<=5;e++)
					{
						//cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
						if(e==2||e==3) continue;
						if(a+b+c+d+e==15&&a*b*c*d*e==120){
							//cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
						words[1]=(e==1);
						words[2]=(b==2);
						words[3]=(a==5);
						words[4]=(c!=1);
						words[5]=(d==1);
						rank[a]=1;rank[b]=2;rank[c]=3;rank[d]=4;rank[e]=5;
						if(words[rank[1]]==1&&words[rank[2]]==1&&words[rank[3]]==0&&words[rank[4]]==0&&words[rank[5]]==0)
						{
							//for(int i = 1; i <= 5; i++)
						        //cout<<"Rank "<<i<<": Player "<<char(rank[i]+64)<<endl;
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
						}
					}}}}}}
	return 0;
}