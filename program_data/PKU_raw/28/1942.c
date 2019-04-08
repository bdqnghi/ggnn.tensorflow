int main(){
	char a[5000];
	int i,j,t,k,l,t1;
	gets(a);
    l=strlen(a);
	for(i=0;i<l;i++){
		t=a[i];
		if(t==32){
			printf("%d",i);
			k=i;
			break;
		}
	}
   if(i==l){
			printf("%d",i);
		}
   else{
	for(j=i+1;j<l;j++){
		t=a[j];
        t1=a[j-1];
		if(t==32&&t1!=32){
			printf(",%d",j-k-1);
			k=j;
		}
		if(t==32&&t1==32){
			k=j;
		}
    if(j==l-1){
			printf(",%d",j-k);
		}
		
	}
   }
   
	return 0;
}