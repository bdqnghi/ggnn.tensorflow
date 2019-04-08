int main(){
	int n,i,a[100],b[100],p[100],e[100],j,m=0,max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d%d",&a[i],&b[i]);
	if((a[i]<=140)&&(a[i]>=90)&&(b[i]<=90)&&(b[i]>=60)){
	    p[i]=1;
	}
	else{
		p[i]=0;
	}
	}
	for(i=0;i<n;i++){
		if(p[i]==1){
			e[m]=0;
			for(j=i;j<n&&p[j]==1;j++){
			e[m]++;
			}
			m++;
		}
	}
	if(m==0)
	e[0]=0;
	max=e[0];
	for(i=1;i<m;i++){
		if(e[i]>max){
		max=e[i];
		}
	}
	printf("%d\n",max);
	


return 0;


}





