void main()
{
	int n=0,i=0,k=0;
	char c[101]={0},w[15][15]={0};
	gets(c);
	while(c[k]!='\0')
	{
		if((c[k]>='a'&&c[k]<='z')||(c[k]>='A'&&c[k]<='Z'))w[n][i++]=c[k];
		else {n++;i=0;}
		k++;
	}
	w[n][i]='\0';
	for(i=n;i>0;i--)
		printf("%s ",w[i]);
	printf("%s\n",w[0]);
}