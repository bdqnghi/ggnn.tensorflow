int main(){
	int n,m;
	int k,i,j,l,s[100],r;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m==0) printf("60\n");
		if(m!=0){
			k=0;
		    for(j=0;j<m;j++){
			    scanf("%d",&s[j]);
		        if(s[j]<=60-(j+1)*3) continue;                       
			    if((s[j]>60-(j+1)*3) && k==0){
                    k=1;
					l=j;
				}
			}
		    if(k==0) r=60-j*3;
		    if(k==1){
                if(s[l]>60-(l+1)*3+3){
			    	r=60-l*3;
			   }
			   if(s[l]>60-(l+1)*3 && s[l]<=60-(l+1)*3+3){
				    r=s[l];
			   }
			}
		    printf("%d\n",r);
		}
	}
    return 0;
}