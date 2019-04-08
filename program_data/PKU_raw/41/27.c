int main()
{
	int a,b,c,d,e,word[6],rank[6];
	for(a=1;a<6;a++)
		for(b=1;b<6;b++)
			if(a!=b)
		for(c=1;c<6;c++)
			if(c!=a&&c!=b)
		for(d=1;d<6;d++)
			if(d!=a&&d!=b&&d!=c)
		for(e=1;e<6;e++)
			if(e!=a&&e!=b&&e!=c&&e!=d)
			{	word[1]=(e==1);
		word[2]=(b==2);
		word[3]=(a==5);
		word[4]=(c!=1);
		word[5]=(d==1);
		rank[a]=1;
		rank[b]=2;
		rank[c]=3;
		rank[d]=4;
		rank[e]=5;
		if(word[rank[1]]==1&&word[rank[2]]==1&&word[rank[3]]==0&&word[rank[4]]==0&&word[rank[5]]==0&&(e!=2&&e!=3))
			cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
			}
	return 0;
}