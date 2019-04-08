int main(int argc, char* argv[])
{
	int from,to,i,j;
	long sum=0;
	char in[255],out[255]="0";
	scanf ("%d%s%d",&from,in,&to);
	char s10[100],s[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (i='0';i<='9';i++)
		s10[i]=i-'0';
	for (i='a';i<='z';i++)
		s10[i]=i-'a'+10;
	for (i='A';i<='Z';i++)
		s10[i]=i-'A'+10;
	for (i=0;in[i]!='\0';i++)
		sum=sum*from+s10[in[i]];
	for (i=0;i<255;i++)
	{
		out[i]=s[sum%to];
		sum=sum/to;
		if (sum==0) break;
	}
	for (j=i;j>=0;j--)
		printf ("%c",out[j]);
	return 0;
}