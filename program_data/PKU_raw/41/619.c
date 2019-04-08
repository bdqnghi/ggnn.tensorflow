int main()
{
	int a,b,c,d,e;
	int word[6]={0},rank[6]={0};
	for(a=1;a<=5;a++)
		{
			for(b=1;b<=5;b++)
		 {
			 if(b==a)
			 continue;

			
			for(c=1;c<=5;c++)
         {
			 if((c==a)||(c==b))
			  continue;

					for(d=1;d<=5;d++)
				{	
					if((d==a)||(d==b)||(d==c))
							 continue;
				    
				   e=15-a-b-c-d;
	                if((e==2)||(e==3))
		                   continue;
					word[1]=(e==1);
					word[2]=(b==2);
					word[3]=(a==5);
					word[4]=(c!=1);
					word[5]=(d==1);
				rank[a]=1;
				rank[b]=2;
				rank[c]=3;
				rank[d]=4;
				rank[e]=5;
				if((word[rank[1]]==1)&&(word[rank[2]]==1)&&(word[rank[3]]==0)&&(word[rank[4]]==0)&&(word[rank[5]]==0))
					cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;

				
				
				
	}
				
				
	}	
				
	}		
				
				
				}
				
				return 0;



















}