
int main()
	
{
	
	
	int a,b,c,d,e;
	int word[6];
	for(int a=1;a<=5;a++)
	{
	      for(int b=1;b<=5;b++)
		  {
			  if(a==b)continue;
                for(int c=1;c<=5;c++)
				{
			            if(a==c||b==c)continue;
			           for(int d=1;d<=5;d++)
					   {
				            if(a==d||b==d||c==d)continue;
						    e=15-a-b-c-d;
							word[a]=(e==1);
							word[b]=(b==2);
							word[c]=(a==5);
							word[d]=(c!=1);
							word[e]=(d==1);
							if(word[1]==1&&word[2]==1&&e!=2&&e!=3&&word[3]==0&&word[4]==0&&word[5]==0)
							{
								cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
							}




					   }
					
				}
		  }
	}


    return 0;
}