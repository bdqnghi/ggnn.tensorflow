int main()
{
	struct comp{char A;int n;};
	int i,j,k=0;
	char P[1000];
	struct comp C[100][26]={'A',0}; 
	gets(P);
	for(i=0;i<strlen(P);i++)
	{
		if(i>0)
			if(P[i]==P[i-1]||P[i]==P[i-1]+'A'-'a'||P[i]==P[i-1]+'a'-'A')
			;
			else
				k++;
		for(j=0;j<26;j++)
			if(j+'A'==P[i]||j+'a'==P[i])
			{
				C[k][j].n++;
				C[k][j].A=j+'A';
				break;
			}
	}
	for(k=0;k<100;k++)
	for(j=0;j<26;j++)
		if(C[k][j].n!=0)
			printf("(%c,%d)",C[k][j].A,C[k][j].n);
	return 0;
}