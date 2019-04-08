int main ()
{
	int a,b,c,d,e,cc1,cc2,cc3,cc4,cc5;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(b==a) continue;
			for(c=1;c<=5;c++)
			{
				if(c==a||c==b) continue ;
				for(d=1;d<=5;d++)
				{
					if(d==a||d==b||d==c) continue;
					e=15-a-b-c-d;
					cc1=(e==1);
					cc2=(b==2);
					cc3=(a==5);
					cc4=(c!=1);
					cc5=(d==1);
					if((((a<=2&&cc1==1)||(a>=3&&cc1==0))+((b<=2&&cc2==1)||(b>=3&&cc2==0))+((c<=2&&cc3==1)||(c>=3&&cc3==0))+((d<=2&&cc4==1)||(d>=3&&cc4==0))+((e<=2&&cc5==1)||(e>=3&&cc5==0)))==5)
						if(e!=2&&e!=3)
							cout << a<<' '<< b<<' '<< c<<' '<< d<<' '<<e<<endl;
				}
			}
		}
	}
	return 0 ;
}
				
