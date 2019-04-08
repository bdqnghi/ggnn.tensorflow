const long maxLenth=100;
const long maxwords=10000;

long n;
char word[maxwords+10][maxLenth+10];

char fw[maxLenth+10],tw[maxLenth+10];

main(){
    long i,j,k;
    char a;    
    n=0;
    do{
	scanf("%s",word[++n]);
	a=getchar();
    }while(a!='\n');
    scanf("%s%s",fw,tw);
    for(i=1;i<=n;i++){
	if(strcmp(fw,word[i])==0)printf("%s",tw);
	else printf("%s",word[i]);
	if(i<n)printf(" ");
	else printf("\n");
    }
    
    return 0;
}
