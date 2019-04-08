
int main()
{
	int a,b,c,d,e;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(b==a)continue;
			for(c=1;c<=5;c++)
			{
				if(c==a||c==b)continue;
				for(d=1;d<=5;d++)
				{
					if(d==a||d==b||d==c)continue;
					e=15-a-b-c-d;
					if(e==a||e==b||e==c||e==d)continue;
					if( ((e==1)+(a==1||a==2))%2==0 && ((b==2)+(b==1||b==2))%2==0 && ((a==5)+(c==1||c==2))%2==0 && ((c!=1)+(d==1||d==2))%2==0 && ((d==1)+(e==1||e==2))%2==0&&(e!=2)&&e!=3)
					{
						if(((e==1)+(b==2)+(a==5)+(c!=1)+(d==1))==2)
						cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
					}
				}
			}
		}
	}
}
