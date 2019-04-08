int f(char s[],int l)
{
	int u;
	for(u=0;u<l;u++)
		if(s[u]!=' ') return 1;
	return 0;
}

void peidui(char s[],int l,int a[],int b[],char boy)
{
	int u,flag,k,ii;
	for(u=0;u<l;u++)
		if(s[u]==boy&&s[u+1]!=boy)//?????????????
		{
			for(k=u+1;k<l;k++)
			{
				if(s[k]==boy) {flag=0;break;}//????????
				if(s[k]!=boy&&s[k]!=' ')//??????
				{
					s[u]=' ';s[k]=' ';
					for(ii=0;;ii++)
						if(a[ii]==-1) {a[ii]=u;b[ii]=k;break;}//????????????a?b?
						break;
				}
			}
		}

}

void main()
{
	char s[101];
	scanf("%s",s);
	int l;
	char boy;
	boy=s[0];
	l=strlen(s);//?????
	int a[51],b[51];
	int i;
	for(i=0;i<51;i++)
	    a[i]=b[i]=-1;
	while(f(s,l)!=0)//?????????
		peidui(s,l,a,b,boy);
	int pp;
	int x,y,z;
	for(x=1;x<=l/2-1;x++)
		for(y=0;y<=l/2-1-x;y++)
			if(b[y]>b[y+1]) 
			{ 
				z=b[y];b[y]=b[y+1];b[y+1]=z;
				z=a[y];a[y]=a[y+1];a[y+1]=z;
			}
	for(pp=0;;pp++)
	{
		if(a[pp]==-1) break;
		else printf("%d %d\n",a[pp],b[pp]);
	}
}



