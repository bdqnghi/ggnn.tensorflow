int main(){
   int n,i,t,k,h,b[3000];
   char a[3000][256],pd[3000][256];
   scanf("%d",&n);
   for(i=0;i<n;i++){
     scanf("%s",a[i]);
	 b[i]=strlen(a[i]);
   }
   for(t=0;t<n;t++){
	   for(k=0;k<b[t];k++){
		   if(a[t][k]=='A'){
            pd[t][k]='T';
		   }else if(a[t][k]=='T'){
            pd[t][k]='A';
		   }else if(a[t][k]=='C'){
            pd[t][k]='G';
		   }else{
            pd[t][k]='C';
		   }
		   pd[t][b[t]]='\0';
	   }
   }
   for(h=0;h<n;h++){
    printf("%s\n",pd[h]);
   }
return 0;
}
