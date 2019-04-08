int main()
{
	char zm[101],zm2[101];
	char a,b,c;
	int n,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&zm);
		k=strlen(zm);
		if(k>3)
		{
			a=zm[k-3];
			b=zm[k-2];
			c=zm[k-1];
		if(b==101&&c==114)
		{
			strncpy(zm2,zm,k-2);
			zm2[k-2]=0;
		}
		if(b==108&&c==121)
		{
			strncpy(zm2,zm,k-2);
			zm2[k-2]=0;
		}
		if(a==105&&b==110&&c==103)
		{
			strncpy(zm2,zm,k-3);
			zm2[k-3]=0;
		}
		}
		puts(zm2);
	}
	return 0;
}