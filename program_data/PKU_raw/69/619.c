
void char_revto_int(char*s, int* a, int len)
{
	for(int i=len-1 ; i>=0 ; i--)
		a[len-1-i]=s[i]-'0';
}

void add_int(int* a1, int* a2, int* res)
{
	for(int i=0 ; i<MAX_LEN ; i++)
	{
		res[i]+=a1[i]+a2[i];
		if(res[i] >= 10)
		{
			res[i]-=10;
			res[i+1]++;
		}
	}
}

void output_int(int* a)
{
	int len=MAX_LEN;
	while(!a[len-1])	len--;
	if(len <= 0)
		printf("0");
	for(int i=len-1 ; i>=0 ; i--)
		printf("%d", a[i]);
	printf("\n");
}

int main()
{
	int an1[210]={0}, an2[210]={0}, res[210]={0};
	char s1[210], s2[210];
	scanf("%s", s1);
	scanf("%s", s2);
	char_revto_int(s1, an1, strlen(s1));
	char_revto_int(s2, an2, strlen(s2));
	add_int(an1, an2, res);
	output_int(res);
	return 0;
}