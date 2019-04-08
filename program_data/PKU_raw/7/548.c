int main()
{
	int i,j,x,n,m,d,k,y,v=0;
	char s[256],b[256],t[256];
	scanf("%s%s%s",s,b,t);
	n=strlen(s);
	m=strlen(b);
	for(i=0;i<=n-m;i++)
	{
		if(s[i]==b[0])
		{
			k=i;
			for(j=0,x=i;j<m;j++,x++)
			{
				if(s[x]!=b[j])
					break;		 
			}
			if(j>=m)
				for(d=k,y=0;d<k+m;d++,y++)
				{
					s[d]=t[y];	
					v=1;
				}
		}		
			if(v==1)
			break;
	}
		for(i=0;i<n;i++)
			printf("%c",s[i]);	
		return 0;
}