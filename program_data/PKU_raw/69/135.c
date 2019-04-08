int an1[MAX_LEN+10];
int an2[MAX_LEN+10];
char szLine1[MAX_LEN+10];
char szLine2[MAX_LEN+10];
int Add(int nMaxLen , int * an1, int * an2)
//?????? nMaxLen ???? an1?an2 ???????an1, 
//an1[0],an2[0]?????
{
	int nHighestPos = 0;
	for(int i = 0;i < nMaxLen; i ++ ) {	
		an1[i] += an2[i];		//????
		if( an1[i] >= 10 ) {		//??????	
			an1[i] -= 10;
			an1[i+1] ++;			//??
		}
		if( an1[i] )
			nHighestPos = i; //????????
	}
	return nHighestPos;
}
int main()   {
	scanf("%s", szLine1);  scanf("%s", szLine2);
	int i, j;
	//???memeset???an1???sizeof(an1)??????0
	//sizeof(an1)????an1???
	//memset???string.h???
	memset( an1, 0, sizeof(an1));	
	memset( an2, 0, sizeof(an2));
	//???szLine1???????????????an1???
	//an1[0]?????
	int nLen1 = strlen( szLine1);
	for(j =0, i = nLen1 - 1;i >= 0 ; i --)
		an1[j++] = szLine1[i] - '0';	
	int nLen2 = strlen(szLine2);
	for(j=0, i = nLen2 - 1;i >= 0 ; i --)
		an2[j++] = szLine2[i] - '0';
	int nHighestPos = Add(MAX_LEN,an1,an2);	
	for( i = nHighestPos; i >= 0; i -- )  printf("%d", an1[i]);
	return 0;
}