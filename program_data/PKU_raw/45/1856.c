int main()
{
	char s[50],w[50];
	int i,k,lens,lenw,m=0;
	scanf("%s%s",s,w);
	lens=strlen(s);
	lenw=strlen(w);
	for(i=0;i<lenw;i++)
	{
		for(k=i;k<i+lens;k++)
		{
			if(s[k-i]!=w[k])
	          m=1;
		}
		if (m==0)
		{
			printf("%d",i);
                        break;
		}
		m=0;
		
	}
	return 0;
}

