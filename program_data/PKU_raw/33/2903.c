
int main(int argc, char* argv[])
{	int i,len,n;
	char str[256],str2[256];
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%s",str);
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			if(str[i]=='A')
				str2[i]='T';
			if(str[i]=='T')
				str2[i]='A';
			if(str[i]=='C')
				str2[i]='G';
			if(str[i]=='G')
				str2[i]='C';
		}
		str2[len]='\0';
		printf("%s\n",str2);

		n--;
	}

	return 0;
}

