
int main()
{
	int z,q,s,l,i;
	int word[4];
	char rank[5];
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
		{if(q==z)continue;
			for(s=1;s<=5;s++)
			{if(s==z||s==q)continue;
				for(l=1;l<=5;l++)
				{
					if(l==z||l==q||l==s)continue;
					word[1]=(z+q)==(s+l);
					word[2]=(z+l)>(s+q);
					word[3]=(z+s)<q;
					rank[z]='z';
					rank[q]='q';
					rank[s]='s';
					rank[l]='l';
					if((word[1]+word[2]+word[3])==3)
					{
						for(i=5;i>=1;i--)
						{if(i==z)
							cout<<rank[z]<<" "<<z*10<<endl;
						else if(i==q)
							cout<<rank[q]<<" "<<q*10<<endl;
						else if(i==s)
							cout<<rank[s]<<" "<<s*10<<endl;
						else if(i==l)
							cout<<rank[l]<<" "<<l*10<<endl;
						else continue;
						}


					}
				}}}
				return 0;
}