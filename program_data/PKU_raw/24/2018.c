int main(){
	char z[1000];
	int i,j=1,n,k,m=0,e,max,min,s[1000],l[1000];
	gets(z);
	n=strlen(z);
	for(i=0;i<n;i++){
		if(z[i]==' '||z[i]==','){
			s[j]=i;
			j++;
		}
	}
	s[j]=n;
	s[0]=-1;
	for(k=0;k<j;k++){
		if(s[k+1]-s[k]-1!=0){
		l[m]=s[k+1]-s[k]-1;
		m++;
		}
	}
	m--;
	for(i=0;i<m;i++){
		if(l[i]>l[i+1]){
			e=l[i+1];
			l[i+1]=l[i];
			l[i]=e;
		}
	}
	max=l[m];
for(i=0;i<m;i++){
		if(l[i]<l[i+1]){
			e=l[i+1];
			l[i+1]=l[i];
			l[i]=e;
		}
	}
	min=l[m];
	for(k=0;k<j;k++){
		if(s[k+1]-s[k]-1==max){
			for(i=s[k]+1;i<s[k+1];i++){
				printf("%c",z[i]);
			}
		printf("\n");
		break;
		}
	}
	for(k=0;k<j;k++){
		if(s[k+1]-s[k]-1==min){
			for(i=s[k]+1;i<s[k+1];i++){
				printf("%c",z[i]);
			}
		printf("\n");
		break;
		}
	}
	return 0;
}






		



