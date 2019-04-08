int main(){
    int n,m,i,k,t,sum;
	int a[60];
	scanf("%d",&n);
	for(k=1;k<=n;k++){
		t=0;
		sum=0;
	    scanf("%d",&m);
		if(m==0)
			sum=60;
		else{
			for(i=0;i<m;i++){
				scanf("%d",&a[i]);
			}
			for(i=1;i<=m;i++){
				if(a[i-1]+3*i<=60)
					continue;
				if(a[i-1]+3*(i-1)<60&&a[i-1]+3*i>60){
					sum=a[i-1];
					break;
				}
				if(a[i-1]+3*(i-1)>=60){
					sum=60-3*(i-1);
					break;
				}
			}
				if(i>m)
					sum=60-3*m;
		}
		printf("%d\n",sum);
	}
return 0;
}
