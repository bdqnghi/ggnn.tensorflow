int birev(char * s, int * sr)
{
	int i, len=strlen(s);
	for (i=0; s[i]; i++) sr[len-1-i]=s[i]-'0';
	return len;
}
int bisum(int * ar, int alen, int * br, int blen, int * sum)
{
	int len=(alen>blen)?alen:blen;
	int i, temp=0;
	for (i=0; i<len; i++) {
		sum[i]=(ar[i]+br[i]+temp)%10;
		temp=(ar[i]+br[i]+temp)/10;
	}
	if(temp!=0) {
		sum[i]=1;
		len++;
	}
	return len;
}
void biprt(int * sum, int sumlen)
{
	while (sum[sumlen-1]==0&&sumlen>1) sumlen--;
	while (sumlen) {
		printf("%d", sum[sumlen-1]);
		sumlen--;
	}
}
int main ()
{
	char a[300], b[300];
	int ar[300]={0}, br[300]={0}, sum[300];
	int alen, blen, sumlen;
	gets(a);
	gets(b);
	alen=birev(a, ar);
	blen=birev(b, br);
	sumlen=bisum(ar, alen, br, blen, sum);
	biprt(sum, sumlen);
	return 0;
}
