int main()
{
	char s[500], s2[500], temp1[500], temp2[500];
	int len, n, i, j, k;
	scanf("%s", s);
    len = strlen(s);
	for (i=0;i<len;i++) s2[i] = s[len - i - 1];
	s2[len]=0;
	for (i=2;i<=len;i++)
		for (k=0;k<=len-i;k++)
		{
			for (j=0;j<i;j++) temp1[j] = s[j+k];
			temp1[i] = 0;
			for (j=0;j<i;j++) temp2[j] = s2[len-k-i+j];
			temp2[i] = 0;
			if (strcmp(temp1, temp2)==0) printf("%s\n", temp1);
		}
	return 0;
}
