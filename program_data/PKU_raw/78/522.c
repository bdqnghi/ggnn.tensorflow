int main()
{
	int z,q,s,l,x1,x2,x3,i;
	char rank[6];
	for (i=0;i<6;i++)
		rank[i]='0';
	for (z=10;z<=50;z=z+10)
	{
		for (q=10;q<=50;q=q+10)
		{
			if (q==z) continue;
			for (s=10;s<=50;s=s+10)
			{
				if (s==z || s==q) continue;
				for (l=10;l<=50;l=l+10)
				{
					if (l==z || l==q || l==s) continue;
					x1=((z+q)==(s+l));
					x2=((z+l)>(s+q));
					x3=((z+s)<q);
					if (x1+x2+x3==3)
					{
						rank[z/10]='z';
						rank[q/10]='q';
						rank[s/10]='s';
						rank[l/10]='l';
						for (i=5;i>=1;i--)
						{
							if(rank[i]!='0')
							{
								cout <<rank[i]<<' '<<i*10<<endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}