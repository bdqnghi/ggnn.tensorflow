void main()
{
	char s[10000],c;
	int num[300]={0},i,j,k=0,flag=0,t=0;
	gets(s);
	for(i=0;(c=s[i])!='\0';i++)
	{
		if(s[i]!=' ')
		{
			if(flag==0)
			{
				flag=1;
				for(j=0;(c=s[i+j])!=' '&&(c=s[i+j])!='\0';j++)
                    num[k]++;
			}
        }
		else if(s[i-1]!=' ')
		{flag=0;k++;}
	    	else flag=0;
	}
	printf("%d",num[0]);
    for(i=1;i<=k;i++)
		printf(",%d",num[i]);
}