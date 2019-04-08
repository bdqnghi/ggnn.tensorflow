int main()
{
	int a,b,c,d,e,as[5]={0},i,j;
	for(a=1;a<=5;a++)
		for(b=1;b<=5;b++)
			for(c=1;c<=5;c++)
				for(d=1;d<=5;d++)
					for(e=1;e<=5;e++)
					{
						as[0]=(e==1);
						as[1]=(b==2);
						as[2]=(a==5);
						as[3]=(c!=1);
						as[4]=(d==1);
						
						if(as[0]+as[1]+as[2]+as[3]+as[4]==2)
						{
							if(a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e&&e!=2&&e!=3)
							{
								if(as[0]==1&&a!=1&&a!=2) continue;
								else if(as[1]==1&&b!=1&&b!=2) continue;
								else if(as[2]==1&&c!=1&&c!=2) continue;
								else if(as[3]==1&&d!=1&&d!=2) continue;
								else if(as[4]==1&&e!=1&&e!=2) continue;
								else cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
								}
							}
						}
					
		
		return 0;			
}			

