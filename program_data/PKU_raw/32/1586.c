void main(){
	int n,i,j,al,bl,t;
	char a[100],b[100],out[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{int anum[100];
	int bnum[100];

		scanf("%s",a);
		scanf("%s",b);
        al=strlen(a);
		bl=strlen(b);
		for(j=0;j<al;j++)
			anum[al-1-j]=a[j]-'0';
        for(j=0;j<bl;j++)
			bnum[bl-1-j]=b[j]-'0';
		for(j=0;j<bl;j++)
			anum[j]=anum[j]-bnum[j];
		for(j=0;j<bl;j++)
		{
			if(anum[j]<0)
			{
				anum[j]=anum[j]+10;
				anum[j+1]=anum[j+1]-1;
			}
		}
		if(anum[al-1]==0)
		{
		{for(j=0;j<al-1;j++)
		out[j]=anum[al-2-j]+'0';
		};
		out[al-1]='\0';
		}
		if(anum[al-1]>0)
		{
			for(j=0;j<al;j++)
				out[j]=anum[al-1-j]+'0';
			out[al]='\0';
		}
		printf("%s\n",out);
	}
}