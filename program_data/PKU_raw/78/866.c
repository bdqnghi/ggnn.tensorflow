									
int main()
{	
										
		int z, q, s, l;
		int condition[4], i;
		char rank[4]= {0};


		for(z=1; z<=5; z++)
		{
			for(q=1; q<=5; q++)
			{
				if(z==q) continue;
		
				for(s=1; s<=5; s++)
				{
					if(s==z || s==q) continue;
		
					for(l=1; l<=5; l++)
					{	
						if(l==s || l==q || l==z) continue;
				
						condition[1]= (z+q)==(s+l);
						condition[2]= (z+l)>(s+q);
						condition[3]= (z+s)<q;
		
		

						if(condition[1]+condition[2]+condition[3]==3)
						{
							rank[z]='z';
							rank[q]='q';
							rank[s]='s';
							rank[l]='l';

						for(i=5; i>=1; i--)
						{
							if(rank[i]!=0)
							{	
								cout<<rank[i]<< " "<< i*10<<endl;
							}
						}


			}
			}

			}


		
			}
		
		}

			




return 0;

}