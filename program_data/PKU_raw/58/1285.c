int main()
{
    int n,i,s,j,l;
	char *a=(char *)malloc(sizeof(char)*81);
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		gets(a);
        s=strlen(a);
		l=0;
		for(j=0;j<s;j++){
			if(j==0){
			if((*(a+j)>=97&&*(a+j)<=122)||(*(a+j)>=65&&*(a+j)<=90)||(*(a+j)==95)){
			   l++; 
			}
			else{
			    l=0;
				break;
			}
			}
			else{
			if((*(a+j)>=97&&*(a+j)<=122)||(*(a+j)>=65&&*(a+j)<=90)||(*(a+j)==95)||(*(a+j)>=48)&&(*(a+j)<=57)){
			   l++; 
			}
			else{
			    l=0;
				break;
			}
			}
		}
		if(l==0) printf("0\n");
		else printf("1\n");
	}
	return 0;
}
