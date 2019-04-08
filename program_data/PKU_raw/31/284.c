int main()
{
	char	s[1000][100];
	int	i;
	for (i=0,gets(s[i]); s[i][0]!='e'; gets(s[i])) i++;
	for (i--;i!=-1; i--) puts(s[i]);
	return 0;
}