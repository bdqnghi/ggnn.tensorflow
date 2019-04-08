main() 
{ 
int n[10000], m[10000], i, s; 
for(int q=0;q<10000;q++){
     scanf("%d%d", &n[q],&m[q]); 
	 if(n[q]==0&&m[q]==0){
		 break;
	 }
	 else if(n[q]!=0&&m[q]!=0){
		 s=0;
		 for(i=2; i<=n[q]; i++) {
             s=(s+m[q])%i;
		 }
          printf("%d\n", s+1); 
	 }
} 
return 0;
}