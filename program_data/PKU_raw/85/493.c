
void main ()
{
	int n,i,j,temp;
	char word[100][30];

	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%s",word[i]);
	for(i=0;i<n;i++)
	{
		temp=1;
		if (word[i][0]!='_')

	           if( word[i][0]>'z' ||  word[i][0]<'A' || word[i][0]>'Z'  && word[i][0]<'a' )
		            temp=0;
	for(j=1;j<strlen(word[i]);j++)
			if(word[i][j]<'0' || word[i][j]>'z' || word[i][j]>'9'&&word[i][j]<'A' || (word[i][j]>'Z' && word[i][j]<'a' && word[i][j]!='_'))
				temp=0;
	if(temp==0)
				printf("no\n");
			else
				printf("yes\n");
	}
}