int main(){
	int n,i,j=0,s=0,c;
	char a[10],d[10]={'m','a','l','e','\0'};
	double m[42],k[42],h,f;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",a,&h);
		if(strcmp(a,d)==0){
			m[j]=h;
			j++;
		}else{
			k[s]=h;
			s++;
		}
	}
	for(c=0;c<j;c++){
		for(i=0;i<j-1;i++){
			if(m[i]>m[i+1]){
				f=m[i];
				m[i]=m[i+1];
				m[i+1]=f;
			}
		}
	}
     for(c=0;c<s;c++){
		for(i=0;i<s-1;i++){
			if(k[i]<k[i+1]){
				f=k[i];
				k[i]=k[i+1];
				k[i+1]=f;
			}
		}
	}
	 for(i=0;i<j;i++){
		 printf("%.2lf ",m[i]);
	 }
	 for(i=0;i<s-1;i++){
		 printf("%.2lf ",k[i]);
	 }
	 printf("%.2lf",k[s-1]);
	 return 0;
}