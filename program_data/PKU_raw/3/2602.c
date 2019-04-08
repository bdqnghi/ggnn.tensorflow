int a[1000];
int main(){
	int i,n,h,j,k,l;
	char m[3];
	m[0]='a';
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&(a[i]));
	}
	for(i=0;i<n;i++){
		   for(j=0;j<n;j++){
			   if(k==a[i]+a[j]){
				   m[0]='y';
                   m[1]='e';
				   m[2]='s';
				   for(l=0;l<3;l++){
				       printf("%c",m[l]);
				   }
				   break;
			   }
		   }
		   if(m[0]=='y'){
			   break;
		   }
	}
	if(m[0]!='y'){
		m[0]='n';
		m[1]='o';
		for(l=0;l<2;l++){
		    printf("%c",m[l]);
		}
	}
	return 0;
}
