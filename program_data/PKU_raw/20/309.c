
void main()
{
	char wo[50][50];
	char in[50][50];
	char out[50][50];
	int i=0,j,k=0;
	int temp=0;
	while(scanf("%s %s",wo[i],in[i])!=EOF)
	{
		i++;
	}
	for(j=0;j<=i;j++)
	{
temp=0;
		for(k=0;wo[j][k]!=0;k++)
			if(wo[j][k]>wo[j][temp])temp=k;
		strcpy(out[j],wo[j]);
		for(k=temp+1;k<temp+1+strlen(in[j]);k++)
			out[j][k]=in[j][k-temp-1];
		do
		{
			temp++;
			out[j][k]=wo[j][temp];
			k++;
		}while(wo[j][temp]!=0);
if(j!=i)
		printf("%s\n",out[j]);
else printf("%s",out[j]);

	}

}