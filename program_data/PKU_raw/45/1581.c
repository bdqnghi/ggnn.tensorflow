void main()
{
	char s[100],w[100],fangzhi[100];
	int ls,lw,i,j;
	scanf("%s%s",s,w);
	ls=strlen(s);
	lw=strlen(w);
	for(i=0;i<lw;i++)
	{
		if(w[i]==s[0])
		{
			for(j=i;j<ls+i;j++)
				fangzhi[j-i]=w[j];
			fangzhi[ls]='\0';
		}
		if(strcmp(fangzhi,s)==0)
		{
			printf("%d\n",i);
			break;
		}
	}
}
