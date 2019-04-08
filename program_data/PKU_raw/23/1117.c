
void main()
{
	int i,j,k;
	char str1[100],str2[100][100];
	gets(str1);
	for(i=0,k=-1;i<100;i++)
	{		
		for(j=0;j<100;j++)
		{
			k=k+1;
			str2[i][j]=str1[k];						
			if(str1[k]==' '||str1[k]=='\0') break;
		}
		if(str1[k]=='\0') break;
	}
   for(i;i>=0;i--)
   {
	   for(j=0;str2[i][j]!=' '&&str2[i][j]!='\0';j++)
		   printf("%c",str2[i][j]);
	   if(str2[i][j]=' '&&i!=0)
		   printf(" ");
   }
}
