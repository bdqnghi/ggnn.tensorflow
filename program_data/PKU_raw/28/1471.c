void main()
{
	int i,len=0,tag=1,flag=1;
	char c[6000];
	gets(c);
	for(i=0;i<6000;i++)
	{
		if(c[i]!=' '&&c[i]!='\0')
		{
			tag=1;
			len++;
		}
		else if(c[i]==' ')
		{
			if(tag==1&&flag==1)
			{
				printf("%d",len);
				flag=0;
			}
			else if(tag==1&&flag==0) printf(",%d",len);
			else continue;
			tag=0;
			len=0;
		}
		else if(c[i]=='\0')
		{
			if(flag==0) printf(",%d",len);
			else if(flag==1) printf("%d",len);
			break;
		}
	}
}