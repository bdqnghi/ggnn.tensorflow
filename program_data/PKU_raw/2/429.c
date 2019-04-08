void main()
{  
	int m,n,i,j,k,d,s;
	int a,b=0,c;
	int tt[1000],pp[1000],miao[26]={0};
	char kk[1000][30];
	char w;
	scanf("%d",&m);

	for(i=0;i<m;i++)
	{
        scanf("%d %s",&tt[i],kk[i]);
	}
    for(s=0,j=65;j<=90;j++,s++)
	{
         for(k=0;k<m;k++)
		 {
             for(d=0;kk[k][d]!='\0';d++)
			 {
				 if(kk[k][d]==j) miao[s]++;
			 }
		 }
	}
	for(a=0;a<26;a++)
	{
		if(miao[a]>b) {b=miao[a];c=a;}
	}
	printf("%c\n%d\n",c+65,b);
	w=(c+65);
	for(i=0;i<m;i++)
	{
		for(j=0;kk[i][j]!='\0';j++)
		{
			if(kk[i][j]==w) {printf("%d\n",tt[i]);break;}
		}
	}

}