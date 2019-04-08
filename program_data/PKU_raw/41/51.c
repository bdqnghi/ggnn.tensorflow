int main()
{
	int a,b,c,d,e,ta,tb,tc,td,te;
	for (a=1;a<=5;a++)
		for (b=1;b<=5;b++)
		{
			if (b==a) continue;
			for (c=1;c<=5;c++)
			{
				if (c==a||c==b) continue;
				for (d=1;d<=5;d++)
				{
					if (d==a||d==b||d==c) continue;
					e=15-a-b-c-d;
					if (e!=2&&e!=3)
					{
						ta=(e==1);
						tb=(b==2);
						tc=(a==5);
						td=(c!=1);
						te=(d==1);
						if (ta+tb+tc+td+te==2)
						{
							if (a+b==3&&ta+tb==2) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e; 
							if (a+c==3&&ta+tc==2) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							if (a+d==3&&ta+td==2) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							if (a+e==3&&ta+te==2) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							if (b+c==3&&tb+tc==2) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							if (b+d==3&&tb+td==2) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							if (b+e==3&&tb+te==2) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							if (c+d==3&&tc+td==2) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							if (c+e==3&&tc+te==2) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							if (d+e==3&&td+te==2) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
						}
					}
				
				
				
				}
						
			
			}
		
		}
			

	return 0;
}