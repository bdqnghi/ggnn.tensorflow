void main()
{	
	int i,j,flag;
	char s[50],w[50];
	char *pw,*ps,*pt;
	scanf("%s%s",s,w);
	pw=w;
	for(i=0;i<strlen(w);i=i+1,pw=pw+1)
	{
		ps=s;
		if(*ps==*pw)
		{
			pt=pw;
			for(j=0;j<strlen(s);j=j+1,ps=ps+1,pw=pw+1)
			{
				if(*ps==*pw)
				{
					flag=1;
					continue;
				}
				else
				{
					pw=pt;
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
