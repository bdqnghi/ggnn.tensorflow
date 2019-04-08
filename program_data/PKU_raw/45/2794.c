int main()
{
	char s[50],w[50];
	int i,j,x,y,m;
	scanf("%s %s",s,w);
    x=strlen(s);
	for(i=0;i<=49;i++)
	{
		if(w[i]==s[0])
		{
			m=i;
			for(j=1;j<=x-1;j++)
			{
				if(w[m+1]!=s[j])
				{
					y=0;
					break;
				}
				else
				{
					y=1;
					m++;
				}
			}
		}
		if(y==1)
		{
			printf("%d",i);
		    break;
		}
	}
	return 0;
			
}
