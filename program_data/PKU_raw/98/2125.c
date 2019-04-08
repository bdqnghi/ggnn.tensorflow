
int main(int argc, char* argv[])
{
	char word[41],words[41];
	int n,s=0,l,i,x=90;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{	
		scanf("%s",word);
		l=strlen(word);		
		if (i==1) {s=l;printf("%s",word);continue;}
		s=s+l+1;
		if (s<=80) printf(" %s",word);
		else {printf("\n%s",word);s=l;}
		
	}
	return 0;
}