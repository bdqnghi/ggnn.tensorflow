
int main()
{
    int n,l;
	char j[100],b[100];
	char  m[10]={'0','1','2','3','4','5','6','7','8','9'};
	char d[100];
	int nj,nb,yj,yb;
	int i,ii;
	scanf("%d",&n);
	for(l=0;l<n;l++)
	{
	scanf("%s\n",j);
    scanf("%s",b);
	nj=0;
	nb=0;
	for(i=0;j[i];i++)
	{	nj++;
	d[i]='0';}
	for(i=0;b[i];i++)
		nb++;
	for(i=nj-1;i>=nj-nb;i--)
		b[i]=b[i-nj+nb];
	for(i=0;i<nj-nb;i++)
		b[i]='0';
	for(i=nj-1;i>=0;i--)
	{
		yj=j[i]-'0';
		yb=b[i]-'0';
		if(yj-yb>=0)
			d[i]=m[yj-yb];
		if(yj-yb<0)
		{	d[i]=m[yj-yb+10];  
		    int p,pp,cp,k;
			for(p=i-1;p>=0;p--)
			{
				if(j[p]!='0')
				{	pp=p;
				break;}
			}
			cp=j[pp]-'0';
			j[pp]=m[cp-1];
			for(k=i-1;k>pp;k--)
					j[k]='9';
		}
	}
	for(i=0;i<nj-1;i++)
	{
		ii=nj-1;
		if(d[i]!='0')
		{ii=i;
		break;}
	}
	for(i=ii;i<nj-1;i++)
		printf("%c",d[i]);
	printf("%c\n",d[nj-1]);
	}
	return 0;
}

