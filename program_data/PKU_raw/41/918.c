int main()
{

	int a,b,c,d,e,A,B,C,D,E,count;
	for(e=1;e<=5;e++)
	{
	
		if(e==2||e==3)
	    continue;
		for(a=1;a<=5;a++)
		{
			if(a==e)
				continue;
			for(b=1;b<=5;b++)
			{
				if(b==a||b==e)
					continue;
				for(c=1;c<=5;c++)
				{
					if(c==e||c==a||c==b)
						continue;
					count=0;
					d=15-a-b-c-e;
					A=(e==1);
					B=(b==2);
					C=(a==5);
					D=(c!=1);
					E=(d==1);
					if((a==1&&A==1)||(b==1&&B==1)||(c==1&&C==1)||(d==1&&D==1)||(e==1&&E==1))
						count++;
					if((a==2&&A==1)||(b==2&&B==1)||(c==2&&C==1)||(d==2&&D==1)||(e==2&&E==1))
						count++;
					if((a==3&&A==0)||(b==3&&B==0)||(c==3&&C==0)||(d==3&&D==0)||(e==3&&E==0))
						count++;
					if((a==4&&A==0)||(b==4&&B==0)||(c==4&&C==0)||(d==4&&D==0)||(e==4&&E==0))
						count++;
					if((a==5&&A==0)||(b==5&&B==0)||(c==5&&C==0)||(d==5&&D==0)||(e==5&&E==0))
						count++;
					if(count==5)
						cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
				}
			}
		}
	}
	return 0;
}






		
