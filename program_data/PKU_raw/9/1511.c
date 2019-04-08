

int main()
{
	int n,age[100],i,j,k=0,e0,m,a;
	int AGE[100];
	char id[100][10];
	char ID[100][10];
	char e[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%s %d",&id[i],&age[i]);
	m=strlen(id[0]);
	for(i=0;i<n;i++) id[i][m]='\0';
	for(i=0;i<n;i++)
	{
		if(age[i]>=60)
		{
			for(a=0;a<=m;a++) ID[k][a]=id[i][a];
			AGE[k]=age[i];
			k++;
		}
	}
	for(i=1;i<=k;i++) for(j=0;j<k-i;j++) if(AGE[j]<AGE[j+1])
	{
		e0=AGE[j+1];
		AGE[j+1]=AGE[j];
		AGE[j]=e0;
		for(a=0;a<=m;a++)
		{
			e[0][a]=ID[j+1][a];
			ID[j+1][a]=ID[j][a];
			ID[j][a]=e[0][a];
		}
	}
	for(i=0;i<n;i++)
	{
		if(age[i]<60)
		{
			for(a=0;a<=m;a++) ID[k][a]=id[i][a];
			k++;
		}
	}
	for(i=0;i<n;i++) printf("%s\n",ID[i]);
	return 0;
}