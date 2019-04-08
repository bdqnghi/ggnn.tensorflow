int main(){
	int ss[100],sz[100],n,h=0,i,sc[100]={0},e,k,c;
   scanf("%d",&n);
   for(i=0;i<n;i++){
	   scanf("%d%d",&ss[i],&sz[i]);
	   if(ss[i]<=140&&ss[i]>=90&&sz[i]>=60&&sz[i]<=90){
		   h++;
	   }else{
		   sc[i]=h;
		   h=0;
	   }
	  
   } c=h;
   
   for(k = 1 ; k <=100; k++){
    	for(i = 0; i < 100-k; i++){
			if(sc[i] < sc[i+1]){
					e = sc[i+1];
					sc[i+1] = sc[i];
					sc[i] = e;
			}
		}
	}
   if(c<sc[0]){
	   printf("%d",sc[0]);
   }else{
	   printf("%d",c);
   }
	return 0;
}
