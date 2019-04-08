int main()
{
	char wd[3000];
	int i,s=0,re[300];
    for(i=0;i<300;i++){
       re[i]=0;}
	gets(wd);
	for(i=0;wd[i]!='\0';i++){
       if(wd[i]!=' '){
         re[s]++;
         }
       if(wd[i]==' '&&wd[i+1]!=' '){
         s++;}
         }
    for(i=0;i<s;i++){
       printf("%d,",re[i]);
       }
    printf("%d",re[s]);
    int a;
    scanf("%d",&a);
    return 0;
}