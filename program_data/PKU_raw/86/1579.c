int main(){
    int n,over,j,i,m,zongshu,jieshu,a,k;
	int leiji[60];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m==0){zongshu=60;}	
		if(m!=0){
			for(j=0;j<m;j++){
				scanf("%d",&leiji[j]);
			}
			over=leiji[m-1]+3*(m-1);
			if(over<=60){
				if(over<=57){
					zongshu=60-3*m;
				}else{
					zongshu=over-3*(m-1);
				}
			}
			if(over>60){
				jieshu=leiji[m-2]+3*(m-2);
				if(jieshu<60){
				  if(jieshu<=57){
					zongshu=60-3*(m-1);
				}else{
					zongshu=jieshu-3*(m-2); 
				}
				}else{
                    zongshu=60-3*(m-2);
				}
			}
		}
	   printf("%d\n",zongshu);
	}
return 0;
}