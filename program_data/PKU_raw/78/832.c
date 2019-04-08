int main()
{
	int z,q,s,l,rank[51],i;
	char word[51];
	for(i=0;i<=50;i++)
	{
		rank[i]=0;
	}
	for(z=10;z<=50;z=z+10)
	{
		for(q=10;q<=50;q=q+10)
		{
			for(s=10;s<=50;s=s+10)
			{
				for(l=10;l<=50;l=l+10)
				{
					if(((z+q)==(s+l))&&((z+l)>(s+q))&& ((z+s)<q)&& z!=q && z!=s && z!=l && q!=s && q!=l && s!=l)
					{
						word[z]='z';
						word[q]='q';
						word[s]='s';
						word[l]='l';
						rank[z]=z;
						rank[q]=q;
						rank[s]=s;
						rank[l]=l;
						for(i=50;i>=0;i--)
						{
							if(rank[i]!=0)
							{
								cout << word[i] << " " << rank[i] << endl;
							}
						}
						
					}

				}
			}
		}
	}
	return 0;
}