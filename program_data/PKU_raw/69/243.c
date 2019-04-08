int main(){
	int n,i,la,lb,r,p=0;
	char e,a[252]={'\0'},b[252]={'\0'},c[252]={'\0'};
	scanf("%s%s",a,b);
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<la-i;i++){
		e=a[i];
		a[i]=a[la-i-1];
		a[la-i-1]=e;
	}
	for(i=0;i<lb-i;i++){
		e=b[i];
		b[i]=b[lb-i-1];
		b[lb-i-1]=e;
	}
	for(i=la;i<252;i++){
		a[i]='0';
	}
	for(i=lb;i<252;i++){
		b[i]='0';
	}
	for(i=0;i<252;i++){
		r=a[i]-'0'+b[i]-'0'+p;
		if(r>=10){
			c[i]=r%10+'0';
			p=r/10;
		}else{
			c[i]='0'+r;
			p=0;
		}
//		if(r==0){
//			break;
//		}
	}
	for(i=251;i>0;i--){
		if(c[i]!='0'){
			break;
		}else{
			c[i]='\0';
		}
	}
	r=strlen(c);
	for(i=0;i<r-i;i++){
		e=c[i];
		c[i]=c[r-i-1];
		c[r-1-i]=e;
	}
	printf("%s",c);
//	scanf("%d",&n);
	return 0;
}