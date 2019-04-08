int main(){
	int a,b,c,d,e,f;
	int t,m,n;
	
 	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
       scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}else{

		t=0;
		
		m=c+60*b+3600*a;
		n=f+e*60+(d+12)*3600;
		t=n-m;
		printf("%d\n",t);
		}
	}
	    

	return 0;
}