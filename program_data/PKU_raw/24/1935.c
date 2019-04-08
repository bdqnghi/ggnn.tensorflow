int main()
{
	char a[100000];
	gets(a);
	int b;
	b=strlen(a);
	char max[40],min[40],temp[40];
	int i,len=0,minn=30,maxx=0;
	for(i=0;i<b;i++)
	{
		if(a[i]!=' '&&a[i]!=',')
		{
			temp[len]=a[i];
			len++;
		}
		if((a[i]==' '||a[i]==','||i==b-1)&&len!=0)
		{
			temp[len]='\0';
			if(len>maxx)	{strcpy(max,temp);	maxx=len;}
			if(len<minn)	{strcpy(min,temp);	minn=len;}
			len=0;
		}
	}
	printf("%s\n%s\n",max,min);
	return 0;
}

