int main()
{
	int n,i,lw,len=0;
	char p[100],w[100];
	scanf("%d",&n);
	strcpy(p,"");
    for(i=0;i<n;i++)
	{
		printf("%s",p);
		scanf("%s",w);
		lw=strlen(w);
		if(len+lw>80)
		{
			printf("\n");
			len=0;
		}else if(i!=0)printf(" ");
		len+=lw+1;
		strcpy(p,w);
	}
	printf("%s\n",p);
	
	return 0;
}

