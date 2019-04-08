struct patient
{
	int all;
	int part;
	double cent;
	char s[7];
}p[M];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&p[i].all,&p[i].part);
		p[i].cent=(double)p[i].part/(double)p[i].all;
	}
	for(i=1;i<n;i++)
	{
		if((p[i].cent-p[0].cent)>0.05)
			strcpy(p[i].s,"better");
		else if((p[0].cent-p[i].cent)>0.05)
			strcpy(p[i].s,"worse");
		else
			strcpy(p[i].s,"same");
	}
	for(i=1;i<n;i++)
		printf("%s\n",p[i].s);
	return 0;
}