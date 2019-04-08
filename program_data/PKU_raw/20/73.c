int max(char a[],int j)
{
	int i,k;
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		if(a[i]>a[j])
		{
			return (0);
		}
	}
	return (1);
}
void cha(char a[],char b[])
{
	int i,k,j;
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		if(max(a,i)==1)
		{
			for(j=0;j<i+1;j++)
				printf("%c",a[j]);
			for(j=0;j<3;j++)
				printf("%c",b[j]);
			for(j=i+1;j<k;j++)
			    printf("%c",a[j]);
			    printf("\n");
				break;
		}
	}
}
void main()
{
	char str[100][11],substr[100][4],d;
	int n=0,i;
	do
	{
		if(n)
		{   
			for(i=1;;i++)
			{
				if((d=getchar())!=' ')
				str[n][i]=d;
				else 
				{ 
				    str[n][i]='\0';
					break;
				}
			}
		}
		else
		{   
			scanf("%s",str[n]);
		}
		    scanf("%s",substr[n]);
			n++;
			d=getchar();
		    str[n][0]=getchar();
	}
	while (str[n][0]!=EOF);
	for(i=0;i<n;i++)
	{
		cha(str[i],substr[i]);
	}
}
