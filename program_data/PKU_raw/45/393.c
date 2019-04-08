void main()
{	
	int i,j,flag;
	char s[50],w[50];
	scanf("%s%s",s,w);
	for(i=0;i<strlen(w);i=i+1)
	{
		if(s[0]==w[i])
		{
			for(j=0;j<strlen(s);j=j+1)
			{
				if(s[j]=w[i+j])
				{
					flag=1;
					continue;
				}
				else
				{
					flag=0;
					break;
				}
			}
		}
		else 
			flag=0;
		if(flag==1)
		{
			printf("%d\n",i);
			break;
		}
	}				
}