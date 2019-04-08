int main()
{
	int panduan(char *a,char *b,int lenyi);
	char yi[50],er[50],*a=yi,*b=er;
	int i,lenyi,lener;
	scanf("%s %s",yi,er);
	lenyi=strlen(yi);
	lener=strlen(er);
	for(i=0;i<lener;i++){
		if(er[i]==yi[0]){
			if(panduan(a,b+i,lenyi)){
				printf("%d",i);
				break;
			}
		}
	}
	return 0;
}
int panduan(char *a,char *b,int lenyi)
{
	int i;
	for(i=0;i<lenyi;i++){
		if(*(a+i)!=*(b+i))
			return 0;
	}
	return 1;
}