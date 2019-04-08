
int find(int a,int b[])
{
	int i,j[100],k,l=a;
	j[0]=1;
	for(i=1;i<100;i++)
		j[i]=2*j[i-1];
	for(i=0;;i++)
	{
		if(a>j[i])
			a=a-j[i];
		else break;
	}
	k=i+1;
	b[0]=l;	
	for(i=1;i<k;i++)
	{
		if(b[i-1]%2==0)
			b[i]=b[i-1]/2;
		else b[i]=(b[i-1]-1)/2;
	}	
	return k;
}

int main()
{
	int sx[1000],sy[1000];                         //????xi?yi
	int x,y,i,j,k,l,xi=0;
	scanf("%d %d",&x,&y);
	if(x==y)
		xi=x;
	else
	{
	i=find(x,sx);
	j=find(y,sy);
	
	for(k=i,l=j;;k--,l--)
	{
		 if(sx[k]!=sy[l])
			xi=sx[k+1];
		if(xi!=0) break;
	}
	}
	printf("%d\n",xi);
}