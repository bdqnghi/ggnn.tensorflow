void main()
{	
int i,j,l,k,m=0;
char a[100],b[100],c[100];
gets(a);
gets(b);
gets(c);
l=strlen(a);
char**p;
p=(char **)malloc(500*sizeof(char*));
for(i=0;i<=499;i++)
p[i]=(char *)malloc(500*sizeof(char));
	for(k=0,i=0;k<=l-1&&i<=499;i++)
	{
		for(j=0;j<=499;j++)
		{	
			if(a[k]!=' '&&a[k]!='\0')
			{
				p[i][j]=a[k];
					k++;
			}
			else
			{
				k++;
				p[i][j]='\0';
				m++;
				break;
			}
		}
	}
	for(i=0;i<=m-1;i++)
	{
		if(strcmp(p[i],b)==0)
			strcpy(p[i],c);
	}
for(i=0;i<=m-2;i++)
printf("%s ",p[i]);
printf("%s",p[m-1]);
}