int main()
{	
	
	int len,k=0,i,n;
	char sen[3001];
	gets(sen);
	len=strlen(sen);
	
	for(i=0;i<len;i++)
	{	
		
		if(sen[i]==' '&&k!=0)
		{	printf("%d,",k);
			k=0;
		
		}
		else if(i==len-1)
		{
			printf("%d",k+1);
			k=0;
		}
		else {if(sen[i]!=' ')k++;}
	}
	
	
	return 0;
}

