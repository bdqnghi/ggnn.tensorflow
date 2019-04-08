


int main()
{

	int sz[9][9];
	int i,j,e,f;
	char ss[10],aa[10],bb[10];
    cin>>ss;
	aa[0]=ss[0];
	bb[0]=ss[2];
	i=atoi(aa);
	j=atoi(bb);

    for(e=0;e<i;e++)
	{
		for(f=0;f<j;f++)
		{
			cin>>sz[e][f];
		}
	}
	int a,b,c,d,max[100]={0};
	for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
		if(sz[a][max[a]]<sz[a][b])
		{
			max[a]=b;

		}
		}
	}
	int tem=0;
		int x;
	
	for(c=0;c<i;c++)
	{	x=0;

		if(tem==1)
			break;
		for(d=0;d<i;d++)
	{
			
			
		if(sz[c][max[c]]>sz[d][max[c]])
		{
			x=1;
	}
			
		}
		if(tem==0&&x==0&&c!=d)
		{ 
			cout<<c<<"+"<<max[c];
			tem++;
		}	
	
		
	
	
	}
	if(tem==0)
		cout<<"No";
	
	return 0;
}
