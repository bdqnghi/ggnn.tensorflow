/*
 * airconditionerranking___1114.cpp
 *?????????
 *  Created on: 2011-11-14
 *      Author: ???
 */
int main ()//?????
{
	int rank[6]={0};
	int a,b,c,d,e,A,B,C,D,E;//????
	for (e=1;e<=5;e++)
	{
		if ((e==2)||(e==3))//???????
			continue;
		for (a=1;a<=5;a++)
		{
			if (a==e)
				continue;//???????????
			for (b=1;b<=5;b++)
				{
				if ((b==a)||(e==b))
					continue;
				for (c=1;c<=5;c++)
				{
					if ((a==c)||(b==c)||(e==c))
						continue;
					for (d=1;d<=5;d++)
						{if ((a==d)||(b==d)||(c==d)||(e==d))
							continue;
						rank[a]=(e==1);   //??????????????????
						rank[b]=(b==2);
						rank[c]=(a==5);
						rank[d]=(c!=1);
						rank[e]=(d==1);
						if (((rank[1]+rank[2])==2)&&(rank[3]+rank[4]+rank[5]==0))//????????????
						{
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
							a=b=c=d=e=6;
							break;
						}
						}
				}
				}
		}
	}
}

