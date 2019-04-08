int main()
{
	char s[51],w[51];
	scanf("%s %s",&s,&w);
	int i,k,t=-1;
	for(i=0;i<=(int)(strlen(w)-strlen(s));i++)
	{
		if(w[i]==s[0])
		{
			for(k=0;k<(int)strlen(s);k++)
			{
				if(w[i+k]==s[k]) t=i;
				else 
				{
					t=-1;
					break;
				}
			}
		}
		if(t!=-1) break;
	}
	if(t!=-1) printf("%d",t);
	return 0;
}

