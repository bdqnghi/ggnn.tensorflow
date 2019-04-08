
int main()
{
	char str[300],a[50][20],t[20],word1[20],word2[20];
	int i,j=0,k=0,num,p1,p2,q1,q2;
	gets(str);

	for(i=0;str[i]!=0;i++)
	{
		if(str[i]==' '||str[i]==',')
		{
			a[j][k]=0;
			j++;
			k=0;
		}
		else
		{
			a[j][k]=str[i];
			k++;
		}
	}

	a[j][k]=0;

	gets(word1);
	gets(word2);


	for(k=0;k<j+1;k++)
	{
		if(strcmp(word1,a[k])==0)

			strcpy(a[k],word2);
	}


	for(k=0;k<j+1;k++)
	{
		if(strlen(a[k])!=0)
		{
			if(k==0)

			printf("%s",a[k]);
			else
			printf(" %s",a[k]);
		}
	}


	return 0;
}