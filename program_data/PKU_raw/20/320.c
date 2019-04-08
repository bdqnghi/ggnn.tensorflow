
void main()
{
	char temp[1024],a[512],b[512];
	
	while(gets(temp)!=NULL)
	{
		if(temp[0]=='\0')
			break;
		
		char* tok=strtok(temp," ");
		strcpy(a,tok);
		tok=strtok(NULL," ");
		strcpy(b,tok);

		int maxindex=0,i;
		char maxchar=a[0];
		for(i=1;a[i]!='\0';i++)
			if(a[i]>maxchar)
			{
				maxchar=a[i];
				maxindex=i;
			}

		int length=strlen(a)-maxindex;
		int index=strlen(a)+3;
		for(i=1;i<=length;i++)
		{
			a[index]=a[index-3];
			index--;
		}
		index=maxindex+1;
		for(i=0;i<=2;i++)
		{
			a[index]=b[i];
			index++;
		}

		printf("%s\n",a);
	}
}