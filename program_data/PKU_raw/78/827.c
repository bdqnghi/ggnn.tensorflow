int main()
{
	int z,q,s,l,i;
	char weigh[6];
	for(z=10;z<=50;z=z+10)
	{
		for(q=10;q<=50;q=q+10)
		{
			if(q==z) continue;
			for(s=10;s<=50;s++)
			{
				if(s==z||s==q) continue;
				for(l=10;l<=50;l=l+10)
				{
					if(l==z||l==q||l==s) continue;
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
					{
						weigh[z/10]='z';
						weigh[q/10]='q';
						weigh[s/10]='s';
						weigh[l/10]='l';
						for(i=5;i>0;i--)
						{
							if(i==z/10||i==q/10||i==s/10||i==l/10)
								cout<<weigh[i]<<" "<<i*10<<endl;
							else continue;
						}
					}



				}
			}
		}
	}
	return 0;
}