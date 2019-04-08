int main()
{
	int n,i;
	scanf("%d",&n);
	char s[500][41];
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	int count=-1;
	for(i=0;i<n;i++)
	{
		count+=strlen(s[i])+1;
		if((count-strlen(s[i])-1)==-1)
                {
                        printf("%s",s[i]);
                        continue;
                }
		else if(count>0&&count<=80)printf(" %s",s[i]);
		else if(count>80)
		{
			count=-1;
			i--;
			printf("\n");
		}
		

	}
    
	return 0;
}

