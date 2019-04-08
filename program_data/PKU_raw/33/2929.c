int main()
{
	int n,len;
	scanf("%d",&n);
    char DNA[1000][1000],DNA2[1000][1000];
	for(int i=0;i<n;i++)
	{
		scanf("%s",&DNA[i]);
        len=strlen(DNA[i]);
        for(int j=0;j<len;j++)
		{
	   if(DNA[i][j]=='A') DNA2[i][j]='T';
            if(DNA[i][j]=='T') DNA2[i][j]='A';
            if(DNA[i][j]=='C') DNA2[i][j]='G';
	   if(DNA[i][j]=='G') DNA2[i][j]='C';
		}
                  puts(DNA2[i]);
	}
    return 0;
}
