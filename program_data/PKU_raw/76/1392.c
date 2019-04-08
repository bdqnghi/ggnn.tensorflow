int main(){
    int n,q[5000],h[5000],star=0,end=0,i,a,k,e;

    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d%d",&q[i],&h[i]);}
    for (k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			if(q[i]>q[i+1]){
			e=q[i+1];
			q[i+1]=q[i];
			q[i]=e;
			e=h[i+1];
			h[i+1]=h[i];
			h[i]=e;
			}
	
		}
	}
   star=q[0];end=h[0];
	for(k=0;k<n;k++){
		if(h[0]>=q[k]&&h[k]>=h[0]){
			end=h[k];
            h[0]=h[k];
			}
		}
	
     for(a=0;a<n-1;a++){
              if(h[a]>h[a+1]){
                  h[a+1]=h[a];             
                }
     }
     if(end==h[n-1]){
     printf("%d %d",star,end);}
     else{printf("no");}
     return 0;
}