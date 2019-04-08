int main()
{
	int a,b,c,d,e;
	int x[10];
	for(a=1;a<=5;a++)
		for(b=1;b<=5;b++)
			for(c=1;c<=5;c++)
				for(d=1;d<=5;d++)
					for(e=1;e<=5;e++)
				{
	            if(e!=2&&e!=3 && a+b+c+d+e==15 && a!=e)
	            { if(e==1)x[a]=1;
				 if(b==2)x[b]=1;
				 if(a==5)x[c]=1;
				 if(c!=1)x[d]=1;
				 if(d==1)x[e]=1;

				 if(x[1]==1 && x[2]==1 && x[3]!=1 && x[4]!=1 &&x[5]!=1)
				 { cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;break;}
				}x[1]=x[2]=x[3]=x[4]=x[5]=0;
					}
				
				
		

	
	return 0;
}