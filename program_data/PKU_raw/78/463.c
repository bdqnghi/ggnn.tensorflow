int main()
{
	int i,j,z,q,s,l,w[5][2],d,p;//rank[i][0]???i?????rank[i][1]?????z--1,q--2,s--3,l--4?
	//w[i][0]???i???????????1234?w[i][1]=i(?????????????????????)
	z=q=s=l=0;
	char name[5]={0,'z','q','s','l'};
	for(i=0;i<5;i++)
	{
		w[i][0]=0;
		w[i][1]=i;
	}
	for(z=10;z<51;z+=10)
	{
		for(q=10;q<51;q+=10)
		{
			if(q==z)
				continue;
			for(s=10;s<51;s+=10)
			{
				if(s==z||s==q)
					continue;
				for(l=10;l<51;l+=10)
				{
					if(l==z||l==q||l==s)
						continue;
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
					{
						w[1][0]=z;
						w[2][0]=q;
						w[3][0]=s;
						w[4][0]=l;
						for(i=1;i<5;i++)
						{
							for(j=1;j<5-i;j++)
							{
								if(w[j+1][0]>w[j][0])
								{
									d=w[j+1][0];
									p=w[j+1][1];
									w[j+1][0]=w[j][0];
									w[j+1][1]=w[j][1];
									w[j][0]=d;
									w[j][1]=p;
								}
							}
						}
						for(i=1;i<5;i++)
						{
							cout<<name[w[i][1]]<<' '<<w[i][0]<<endl;
						}
					}
				}
			}
		}
	}	return 0;
}