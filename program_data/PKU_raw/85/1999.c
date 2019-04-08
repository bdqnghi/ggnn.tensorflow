int main(){
    int n,i,k,a;
    char sz[10000];
	scanf("%d",&n);
	for(k=0;k<n;k++){
	   scanf("%s",sz);
        a=0;
	   for(i=0;i<strlen(sz);i++){
	   if(((sz[i]>='0')&&(sz[i]<='9'))||((sz[i]>='a')&&(sz[i]<='z'))||((sz[i]>='A')&&(sz[i]<='Z'))||(sz[i]=='_')){
	      a=a+1;
	   }
	}
      if((sz[0]>='0')&&(sz[0]<='9')){
           a=0;
       }
    if(a==strlen(sz)){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
	   }
	return 0;
}





