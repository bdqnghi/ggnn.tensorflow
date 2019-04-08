int main()
{
	char s[500];
	gets(s);
	int a[500][500]={0},b[500]={0};
	int l,i,j,k,p=0;
	l=strlen(s);
	for(i=0;i<l-1;i=i+1)
	{
		for(j=1;(i+j<l)&&(i-j>=0);j=j+1)
		{
			if (s[i+j]==s[i-j])
			{
				a[2*j+1][b[2*j+1]]=i;
				b[2*j+1]++;
			}
			else break;
		}
		for(j=0;((i-j)>=0)&&(i+1+j<l);j=j+1)
		{
			if (s[i-j]==s[i+1+j])
			{
				a[2*j+2][b[2*j+2]]=i;
				b[2*j+2]++;
			}
			else break;
		}
	}
	p=0;
	for(i=2;i<=l;i=i+1)
	{
		if (i%2==0)
		{
			for(j=0;j<b[i];j=j+1)
			{
				if(p) printf("\n");
				p=p+1;
				for (k=a[i][j]-i/2+1;k<=a[i][j]+i/2;k=k+1)
					printf("%c",s[k]);
			}
		}
		else
		{
			for(j=0;j<b[i];j=j+1)
			{
				if(p) printf("\n");
				p++;
				for(k=a[i][j]-(i-1)/2;k<=a[i][j]+(i-1)/2;k=k+1)
					printf("%c",s[k]);
			}
		}
	}
	return 0;
}
