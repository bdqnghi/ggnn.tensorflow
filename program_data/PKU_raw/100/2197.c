int main()
{
	char zfc[301];
	int szx[26]={0},szd[26]={0},flag=0,i,j,k;
	scanf("%s",zfc);
	for(i=0;zfc[i]!='\0';i++)
	{
		if(zfc[i]>='a'&&zfc[i]<='z')
		{
			szx[zfc[i]-'a']++;
			flag++;
		}
		if(zfc[i]>='A'&&zfc[i]<='Z')
		{
			szd[zfc[i]-'A']++;
			flag++;
		}
	}
	if(flag==0)
	{
		printf("No");
	}
	else 
	{
		for(j=0;j<26;j++)
		{
			if(szd[j]!=0)
			{
				printf("%c=%d\n",'A'+j,szd[j]);
			}
		}
		for(k=0;k<26;k++)
		{
		    if(szx[k]!=0)
			{
				printf("%c=%d\n",'a'+k,szx[k]);
			}
		}
	}
	return 0;
}

