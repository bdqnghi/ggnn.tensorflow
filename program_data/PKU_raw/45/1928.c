int main()
{
	char s[50],w[50];
	int i,j,p,sLen,wLen,test=0;
	scanf("%s%s",s,w);
	sLen=strlen(s);
	wLen=strlen(w);

	for(j=0;j<wLen;j++)
	{
		p=j;
		if(s[0]==w[j])
		{
			for(i=1;i<sLen;i++,p++)
			{
				if(s[i]!=w[p+1])
				{
					break;
				}
				if(i==sLen-1)
				{
					printf("%d\n",j);
					test=1;
					break;
				}
			}
		}
		if(test==1)
		{
			break;
		}

	}
	return 0;
}