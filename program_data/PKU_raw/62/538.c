int main(){
	char a[100];
	int b[100]={0};
    int i,j;
	scanf("%c",&a[0]);
    for(i=1;;i++){
            scanf("%c",&a[i]);
            if(a[i]==' '){
                       if(a[i-1]==' '){
                                   b[i]=1;
                                   }
                                   }
            if(a[i]=='\n')
            break;
            }
    for(j=0;j<i;j++){
                     if(b[j]==0){
                                 printf("%c",a[j]);
                                 }
                                 }
                                 
     scanf("%d",&i);       
            
return 0;}
