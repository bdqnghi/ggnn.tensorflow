int main(){
	char N[100];
    int sza[100],szb[100],l,i,m,temp,n;
	scanf("%s",N);
	l=strlen(N);
    for(i=0;i<l;i++) sza[i]=(int)(N[i]-'0');
	if(l==1){
             printf("0\n%d",sza[0]);
             return 0;
             }
    temp=sza[0];
	for(i=0;i<l-1;i++){
		m=temp*10+sza[i+1];
		szb[i]=m/13;
		temp=m%13;
	}
	n=temp;
	for(i=0;i<l-1;i++){
		if(i==0&&i+1<l-1){
			if(szb[i]==0) continue;
		}
		printf("%d",szb[i]);
	}
	printf("\n%d",n);
	scanf("%d",&n);
	return 0;
}