int main()
{
	int i,la,lb,q;
	int p[255];
	char a[255],b[255],c[255];
	scanf("%s%s",a,b);
	la=strlen(a);lb=strlen(b);
	if(la<lb)
	{
		strcpy(c,a);strcpy(a,b);strcpy(b,c);
		q=la;la=lb;lb=q;
	}
	p[0]=0;
	for(i=0;i<=la-lb-1;i++)
		p[i+1]=(int)a[i]-48;
	for(i=la-lb;i<=la-1;i++)
		p[i+1]=(int)a[i]+(int)b[i+lb-la]-96;
	for(i=la-1;i>=0;i--)
	{
		p[i]+=p[i+1]/10;
		p[i+1]%=10;
	}
	q=0;
	while(p[q]==0&&q<la)q++;
	for(i=q;i<=la;i++)
		c[i-q]=(char)(p[i]+48);
	c[la+1-q]='\0';
	printf("%s\n",c);
	return 0;
}