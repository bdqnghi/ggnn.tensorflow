int main(int argc, char* argv[])
{
    int n,i,j,len;
	scanf("%d",&n);
	char DNA[256];
    for(i=0;i<n;i++){
		scanf("%s",DNA);
		len=strlen(DNA);
		for(j=0;j<len;j++){
			if(DNA[j]=='A')
				DNA[j]='T';
			else if(DNA[j]=='T')
				DNA[j]='A';
			else if(DNA[j]=='C')
				DNA[j]='G';
			else if(DNA[j]=='G')
				DNA[j]='C';
		}
		printf("%s\n",DNA);
	}
	return 0;
}
