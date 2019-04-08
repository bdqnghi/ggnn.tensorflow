void main()
{
	char string[100],ch[100][100];
	int length[100]={0};
    gets(string);
	int L=strlen(string);
	int i,j=0,k=0,sum;
	for(i=0;i<L;i++)
	{
			if(string[i]==' ')
			{
			    j++;
				length[j]++;
				k=0;
				ch[j][k]=' ';
				k++;
				
			}
			
			if(string[i]!=' ')
			{
				length[j]++;
				ch[j][k]=string[i];
				k++;

			}
		
	}
	sum=j;
	if(sum!=0)
	for(k=1;k<length[sum];k++)
		printf("%c",ch[sum][k]);

	for(j=sum-1;j>=1;j--)
	{
        for(k=0;k<length[j];k++)
			printf("%c",ch[j][k]);
	}
	if(sum!=0)
	printf(" ");
	for(k=0;k<length[0];k++)
		printf("%c",ch[0][k]);


}
			


