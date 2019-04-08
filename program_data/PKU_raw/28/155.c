
void main()
{
	char str[1000];
	char w[300][20]={{0}};
	int l[300]={0};
	int word=0;
	int i,j=-1,k=0;
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
		{
			if(word==0)
			{
				j++;
				w[j][k]=str[i];
				k++;
			}
			else
			{
				w[j][k]=str[i];
				k++;
			}
			word=1;
		}
		else
		{
			k=0;
			word=0;
		}
	}
	for(i=0;i<j+1;i++)
		l[i]=strlen(w[i]);
	printf("%d",l[0]);
	for(i=1;i<j+1;i++)
		printf(",%d",l[i]);
}







