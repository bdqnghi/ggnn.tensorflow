
void main()
{
	int i,j=1,s, n=0,m,word=1,k=0,lenth;
	int x=0,t=0;
	char string[100],a[100][100];
	gets(string);
	lenth=strlen(string);
	for(t=0;t<lenth;t++)
	{
		if(string[t]==' ')
		{x=1;break;}

	}
	if(x==0)
		puts(string);
	else if(x==1)
	{
	for(i=0;i<100;i++)
	{
		if(string[i]!=' ')
		{
			a[0][i]=string[i];
		}
		else
		{
			a[0][i]='\0';break;
		}
	}
	
	for(s=i+1;s<100;s++)
	{
		if(string[s]==' ' && word==1)
		{
			a[j][k]='\0';
			j++;
			word=0;
			k=0;
		}
		if(string[s]!=' ')
		{
			word=1;
			a[j][k]=string[s];
			k++;
		}
	}

	for(m=j;m>0;m--)
	{
		printf("%s ",a[m] );
	}
	printf("%s",a[0]);
	}
}
	
		
