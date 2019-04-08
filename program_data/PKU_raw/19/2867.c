int main()
{
	char s1[110];
	char ss[110][100];
	char s2[110];
	char s3[110];
	char temp[110];
	int i=0,j=0,k=0;
	gets(s1);
	gets(s2);
	gets(s3);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=' ')
			ss[j][k++]=s1[i];
		else if(s1[i]==' ')
		{
			ss[j][k]='\0';
			j++;
			k=0;				
		}	
	}
	
	for(int p=0;p<j+1;p++)
	{
		if(strcmp(ss[p],s2)==0)
			strcpy(ss[p],s3);
			
	}
	for(int q=0;q<j;q++)
	{
		printf("%s ",ss[q]);	
	}
	printf("%s",ss[j]);
	
	//printf("%s\n",ss[p]);
	return 0;		
}
