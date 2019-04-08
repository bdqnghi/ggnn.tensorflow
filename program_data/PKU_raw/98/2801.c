
int main()
{
	int n;
	scanf("%d",&n);
	char s1[41];
	char s2[41];
	char *now;
	char *next;
	char *mid;
	int i,j;
	int nowlen;
	int thislen;
	scanf("%s",s1);
//			printf("%s\n",s1);
	now = s1;
	next = s2;
	nowlen = strlen(s1);
	for(i = 0;i < n - 1;i++)
	{
		for(j = 0;j < 41;j++)
			next[j] = '\0';
		scanf("%s",next);
//					printf("%s\n",next);
		thislen = strlen(next);
//							printf("%d %d\n",nowlen,thislen);
		if(nowlen + thislen + 1 <= 80) 
		{
			printf("%s ",now);
			nowlen = nowlen + thislen + 1;
		}
		else
		{
			printf("%s\n",now);
			nowlen = thislen;
		}
		mid = now;
		now = next;
		next = mid;
	}
	printf("%s",now);
	return 0;
}
		
		

