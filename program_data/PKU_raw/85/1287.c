int main()
{
	int n,i,p,k,m,o;
	char zfc[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++){
		o=0;
		p=strlen(zfc[i]);
		if((zfc[i][0]>=65&&zfc[i][0]<=90)||(zfc[i][0]>=97&&zfc[i][0]<=122)||zfc[i][0]==95){
			o=o;
		}else{
			o=o+1;
		}
		for(k=1;k<p;k++){
			m=zfc[i][k];
			if((m>=65&&m<=90)||(m>=97&&m<=122)||(m>=48&&m<=57)||(m==95)){
				o=o;
			}else{
				o=o+1;
			}
		}
		if(o==0){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	return 0;
}