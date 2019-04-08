
void main()
{
    int s[11],t[11];
	int m,n,j,k,i,l,a,b,sign=0;
	scanf("%d %d",&m,&n);
	s[0]=m;t[0]=n;
	for(k=m/2,i=1;k!=0;i++)
	{
		s[i]=k;
		k=k/2;
        
	}
	for(j=n/2,l=1;j!=0;l++)
	{
		t[l]=j;
		j=j/2;
        
	}
	for(a=0;a<i;a++)
	{
		for(b=0;b<l;b++)
		{
			if(s[a]==t[b]) {sign=1; printf("%d\n",s[a]); break;}
		}
		if(sign==1) break;
	}
}