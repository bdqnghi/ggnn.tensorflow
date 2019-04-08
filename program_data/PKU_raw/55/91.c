int main(){
	int a,b,l,i,j,k=0,d[255];
	char c[255];
	long num=0;
	scanf("%d%s%d",&a,c,&b);
	l=strlen(c);
	for(i=0;i<l;i++){
		if(c[i]>='0' && c[i]<='9') d[i]=c[i]-'0';
		else if(c[i]>='a' && c[i]<='z') d[i]=c[i]-'a'+10;
		else d[i]=c[i]-'A'+10;
	//	printf("%d ",d[i]);
	}
	for(j=0;j<l;j++){
		num+=d[j]*pow(a,i-1);
		i--;
	//	printf("%ld ",num);
	}
//	printf("%d ",num);
	if(num==0)printf("0\n");
	else{
	while(num>0){
		d[k]=num%b;
		if(d[k]>=0 && d[k]<=9) c[k]=d[k]+'0';
		else if(d[k]>=10 && d[k]<='z'-'a'+10) c[k]=d[k]-10+'A';
		num=num/b;
		k++;
	}
	k--;
	while(k>0){
		printf("%c",c[k]);
		k--;
	}
	printf("%c\n",c[k]);
	}
	return 0;
}