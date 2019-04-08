void main()
{
	char s[50],w[50];
	int slen,wlen,total,i,j,k;
	scanf("%s",s);
	scanf("%s",w);
	slen=strlen(s);
	wlen=strlen(w);
	for(i=0;i<=wlen-slen;i++)
	{
		if(s[0]==w[i])
		{
			total=0;
			for(j=i,k=0;j<=slen+i-1;j++,k++)
			{
				if(s[k]==w[j])
					total++;
			}
			if(total==slen)
			{
				printf("%d",i);
				break;
			}
		}
	}
}







