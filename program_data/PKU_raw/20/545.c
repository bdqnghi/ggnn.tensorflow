int o;
void main()
{
	void insert(char x[],char y[],int z,char w[]);
	int max(char p[]);
	char str[20],substr[4],f[30]={0};
	int m,n;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		o=strlen(str);
		m=max(str);
		insert(str,substr,m,f);
		for(n=0;n<o+3;n++)
			printf("%c",f[n]);
		printf("\n");
	}
}	
int max(char p[])
{
	int i,l,d=0;
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		if(p[i]>p[d])
			d=i;
	}
	return d;
}
void insert(char x[],char y[],int z,char w[])
{
	int j,k;	
	for(j=0,k=0;k<=z;j++,k++)
		w[j]=x[k];
	for(j=z+1,k=0;k<3;k++,j++)
		w[j]=y[k];
	for(j=z+4,k=z+1;k<o;k++,j++)
		w[j]=x[k];
}
