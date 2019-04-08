int judge(char s[],int start,int wid)
{
	int end=start+wid-1;
	while((s[start]==s[end])&&(start<end))
	{
		start++;
		end--;
	}
	if(start>=end)
		return(1);
	else
		return(0);
}
int main()
{
	char s[600]={'\0'};
	int l,w,i,j,c;
	gets(s);
	l=strlen(s);
	for(w=2;w<=l;w++)
	{
		for(i=0;i<=l-w;i++)
		{
			c=judge(s,i,w);
			if(c==1)
			{	
				for(j=i;j<=i+w-1;j++)
					putchar(s[j]);
				printf("\n");
			}
		}
	}
}