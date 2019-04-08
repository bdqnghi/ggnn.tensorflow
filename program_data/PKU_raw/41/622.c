/*
 * wanyi.cpp
 *
 *  Created on: 2012-11-8
 *      Author: 7
 */
int main()
{
	int a,b,c,d,e;
	for(a=1;a<6;a++)
	{
		for(b=1;b<6;b++)
		{
			if(b==a)
				continue;
		for(c=1;c<6;c++)
			{
			if(c==a||c==b)
				continue;
				for(d=1;d<6;d++)
				{
					if(d==a||d==b||d==c)
						continue;
					e=15-a-b-c-d;
					if(e!=1&&e!=2&&e!=3&&e<6)
					{
					if(((e==1&&a==2)+(b==2)+(a==5&&(c==1||c==2))+(c!=1&&(d==1||d==2))+(d==1&&e==2)==2)&&((e!=1)+(a!=5)+(b!=2)+(c==1)+(d!=1)==3))
					{
						cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
					}
					}
				}
			}
		}
	}
}
