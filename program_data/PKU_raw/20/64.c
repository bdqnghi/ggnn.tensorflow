void in(char str[13],char substr[3])
{
	int i,j,k,r;
	for (i=0;i<=9;i++)
	{
		r=1;
		for (j=i;j<=9;j++)
		{
			if(str[i]<str[j])
			{
				r=0;
				break;
			}
		}
		if (r==1)
		{
			for (k=12;k>=i+4;k--)
				{
					str[k]=str[k-3];
				}
				str[i+1]=substr[0];
				str[i+2]=substr[1];
				str[i+3]=substr[2];
				break;
		}
	}
}
void main()
{
	char str[100][13]={0};
	char substr[100][3]={0};
	int i,n;
	char c;
	for(n=0;;n++)
	{
		if((c=getchar())==EOF)
		{
			break;
		}
		else {
			str[n][0]=c;
			scanf("%s %s",&str[n][1],substr[n]);
		}
		in(str[n],substr[n]);	
		
	}
	for (i=0;i<=n-1;i++)
	{
		
		printf("%s\n",str[i]);
	}
}