int main(){
	double r;
	char a[501],b[501];
	scanf("%lf",&r);
	scanf("%s%s",a,b);
	int s1,s2,y=1,m=0;
	s1=strlen(a);
	s2=strlen(b);
	if(s1!=s2){
		printf("error");
	}else{
		for(int i=0;a[i];i++){
			if((a[i]=='A'||a[i]=='G'||a[i]=='C'||a[i]=='T')&&(b[i]=='A'||b[i]=='G'||b[i]=='C'||b[i]=='T')){
				if(a[i]==b[i]){m++;}
			}else{
				printf("error");y=0;
				break;
				
			}
		}
		if(m*1.0/s1>r&&y==1){
			printf("yes");
		}else if(y==1){
			printf("no");
		}
	}


  

return 0;
}