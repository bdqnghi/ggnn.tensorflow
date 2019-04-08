/*void InsertSort(int[],int);
void InsertSort(int pData[],int Count)
{
int iTemp;
int iPos;
int i;
for(i=1;i<Count;i++)
              {
               iTemp = pData[i];
               iPos = i-1;
               while((iPos>=0) && (iTemp<pData[iPos]))
                               {
                                 pData[iPos+1] = pData[iPos];
                                 iPos--;
                               }
               pData[iPos+1] = iTemp;
             }
} */
void main()
{
	int i=0,j,k,m;
	int max[100];
	char str[100][100],substr[100][100];
	memset(max,0,sizeof(int)*100);
	while(scanf("%s %s",&str[i],&substr[i])!=EOF){
	i++;}//
	for(j=0;j<i;j++){
		for(k=0;k<strlen(str[j]);k++)
			if(str[j][k]>str[j][max[j]])max[j]=k;}
	for(j=0;j<i;j++){k=0;
		while(k<=max[j]){putchar(str[j][k]),k++;}
		for(m=0;m<strlen(substr[j]);m++)putchar(substr[j][m]);
		while(k<strlen(str[j])){putchar(str[j][k]),k++;}
	putchar('\n');}
}