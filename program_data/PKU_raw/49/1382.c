
reverse(char s[],int j)
{
	int len;
	int reverse=1;
	int i;
	len=strlen(s);
	for(i=0;i<=j-i-1;i++)
		if(s[i]!=s[j-i-1])
		{reverse=0;break;}
	return(reverse);
}

main()
{
	char s[505],temp[505]={0};
	int i,j,k;
	int len;

	gets(s);
	len=strlen(s);
	for(i=2;i<=len;i++)
		for(j=0;j<=len-i;j++){
			for(k=0;k<i;k++)
				temp[k]=s[j+k];
			if(reverse(temp,i)==1) printf("%s\n",temp);
		}
	
}