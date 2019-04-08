
int main(){
	char w[2000];//??
	char s[2000];
	char m;
	int i,k;
	scanf("%s %s",s,w);
	if (strlen(s)==strlen(w))
	{
		for (i=0;s[i]!='\0';i++)
		{
			for(k=i;w[k]!='\0';k++)
			{
				if (s[i]==w[k])
				{
					m=w[k];
					w[k]=w[i];
					w[i]=m;
					break;
				} 		
			}
		}
		if (strcmp(s,w)==0)
		{
			printf("YES");
		} 
		else
		{
			printf("NO");
		}

	} 
	else
	{
		printf("NO");
	}
	return 0;
}