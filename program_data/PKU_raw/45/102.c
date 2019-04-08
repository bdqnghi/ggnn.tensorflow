int main()
{
	char s[50];
	char w[50];
	scanf("%s %s",&s,&w);
	int t1,t2;
	t1=strlen(s);
	t2=strlen(w);
	int i,j,n;
	i=t1-1;
	for(j=0;j<t2;j++)
		{
			if(s[0]==w[j]&&s[i]==w[j+i])
			{
				n=j;
				break;
			}
		}
	printf("%d",n);
}
