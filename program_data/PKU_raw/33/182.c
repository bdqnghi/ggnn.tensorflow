int main(){
    int n,i,j;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char DNA0[256],DNA1[256];
		scanf("%s",DNA0);
		for(j=0;j<strlen(DNA0);j++)
		{
			if(DNA0[j]=='A')
				DNA1[j]='T';
			if(DNA0[j]=='T')
				DNA1[j]='A';
			if(DNA0[j]=='C')
				DNA1[j]='G';
			if(DNA0[j]=='G')
				DNA1[j]='C';
		}
		DNA1[strlen(DNA0)]='\0';
		printf("%s\n",DNA1);
	}
	return 0;
}