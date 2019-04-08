
int main()
{
	char zfc[100000];
	int total;
	scanf("%d",&total);

	int i,j,k;
	int alphabet[26];
	for(i=1;i<=total;i++)
	{
		scanf("%s",zfc);
		for(j=0;j<26;j++)
		{
			*(alphabet+j)=0;
		}
		for(j=0;*(zfc+j)!='\0';j++)
		{
			for(k=0;k<26;k++)
			{
				if(*(zfc+j)==97+k)
				{
					*(alphabet+k)=1+*(alphabet+k);
					break;
				}
			}
		}
		int time=0;
		for(j=0;*(zfc+j)!='\0';j++)
		{
			if(*(alphabet+(*(zfc+j)-97))==1)
			{
				printf("%c\n",*(zfc+j));
				time++;
				break;
			}
		}
		if(time==0)
		{
			printf("no\n");
		}
	}
	return 0;
}