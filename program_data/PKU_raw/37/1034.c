
int main(int argc, char* argv[])
{
	int n,i,len,m,letter[26],*pl;
	char zfc[100000],*p;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(pl=letter;pl<letter+26;pl++)
			*pl=0;
		pl=letter;

		scanf("%s",zfc);
		len=strlen(zfc);
		for(p=zfc;p<zfc+len;p++)
			*(pl+*p-97)+=1;

		m=0;
		for(p=zfc;p<zfc+len;p++)
		{
			if(*(pl+*p-97)==1)
			{
				printf("%c\n",*p);
				m=1;
				break;
			}
		}

		if(m==0)
			printf("no\n");
	}
	
	return 0;
}