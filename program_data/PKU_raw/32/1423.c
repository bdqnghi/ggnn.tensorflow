
int main()
{
	char sn[10];
	int n;
	gets(sn);
	n = atoi(sn);
	int k;
	char a[250][250];
	char b[250][250];
	char cc[10];

	for(k=0;k<n;k++)
	{
		if( k==0)
		{
			gets(a[k]);
			gets(b[k]);
		}
		else
		{
			gets(cc);
			gets(a[k]);
			gets(b[k]);
		}
	}
    int lena[250];
	int lenb[250];
	int i;int j;
	for(k=0;k<n;k++)
	{

	lena[k]=strlen(a[k]);
	lenb[k]=strlen(b[k]);
	

    int shua[251][250];int shub[251][250];
	memset(shua[k],0,sizeof(shua[k]));
	memset(shub[k],0,sizeof(shub[k]));
	
	j=0;
	for(i=lena[k]-1;i>=0;i--)
	{
         shua[k][j++]=a[k][i]-'0';
	}
	j=0;
	for(i=lenb[k]-1;i>=0;i--)
	{
         shub[k][j++]=b[k][i]-'0';
	}
	

	for(i=0;i<250;i++)
	{
		shua[k][i]-=shub[k][i];
		if(shua[k][i]<0)
		{
			shua[k][i]+=10;
			shua[k][i+1]--;
		}
	}
	int bStartOutput = 0;
	for(i=249;i>=0;i--)
	{
		if(bStartOutput)
		{
			printf("%d",shua[k][i]);
		}
		else if(shua[k][i] > 0)
		{
			printf("%d",shua[k][i]);
			bStartOutput = 1;
		}
	}
	printf("\n");
	if (!bStartOutput)
		printf("0\n");

	}

	return 0;
}