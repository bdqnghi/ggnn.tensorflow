int main()
{
	int z,q,s,l;
	char name[6];
	int state[3],i;
	for(z=1;z<=5;z++)
	{
		for(q=1;q<=5;q++)
		{
			if(z==q) continue;
			for(s=1;s<=5;s++)
			{
				if(s==q||s==z) continue;
				for(l=1;l<=5;l++)
				{
					if( l==s||l==q||l==z) continue;
					state[0]=(z+q==s+l);
					state[1]=(z+l>s+q);
					state[2]=(z+s<q);
					if(state[0]==1&&state[1]==1&&state[2]==1)
					{
						name[z]='z';
						name[q]='q';
						name[s]='s';
						name[l]='l';
						for(i=5;i>0;i--)
						{
							if(i==z) cout<<name[z]<<" "<<i*10<<endl;
							if(i==q) cout<<name[q]<<" "<<i*10<<endl;
							if(i==s) cout<<name[s]<<" "<<i*10<<endl;
							if(i==l) cout<<name[l]<<" "<<i*10<<endl;
						}
					}
				}
				
			}
			
		}
	}
	return 0;
}