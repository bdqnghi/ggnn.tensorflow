void main()
{
	char a[300];
	int j,b[52]={0},k,y=0;
	for(k=0;k<300;k++)
	{
		scanf("%c",&a[k]);
		if (a[k]=='\n'){a[k]='\0';break;}
		if(a[k]<91&&a[k]>64)
			b[a[k]-65]++;
		else if(a[k]<123&&a[k]>96)
			b[a[k]-71]++;
	}
	for(j=0;j<26;j++)
		if(b[j]!=0)
		{	printf("%c=%d\n",j+65,b[j]);y++;};
	for(;j<52;j++)
		if(b[j]!=0)
		{	printf("%c=%d\n",j+71,b[j]);y++;};
		if (y==0)
			printf("No");
		
}
