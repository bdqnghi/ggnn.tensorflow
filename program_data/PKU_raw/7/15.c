int main()
{
	int i,j,t,k;
	char s[256],w[256],c[256],x[256];
	scanf("%s",w);
	scanf("%s",s);
	scanf("%s",c);
	t=strlen(s);
    for(i=0;w[i]!='\0';i++)
	{
		for(j=0;j<t;j++)
		{
			x[j]=w[i+j];
		}
		x[j]='\0';
		if(strcmp(s,x)==0)
		{
			for(k=0;k<t;k++)
			{
				w[i+k]=c[k];
			}
			break;
		}
	}
	printf("%s",w);
	return 0;	
}