int main(){
	char m[60],n[60];
	int k,t,s,a;
	scanf("%s %s",&m,&n);		
	for(t=0;n[t]!='\0';t++){
	    if(m[0]==n[t]){
			a=t;
		}
		for(k=1,s=t;m[k]!='\0';k++,s++){
		    if(m[k]!=n[s]){
			    k=0;
			    break;
			}
		}
		if(k!=0) break;
	}
	printf("%d",a);
	return 0;
}