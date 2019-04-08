int main(){
	long int n;
	scanf("%d",&n);
	long int k,a,b,c,d,e=1,f,g[100000]={2,3},h;
	for(k=3;k<=n;k+=2){
		c=(int)sqrt(k);
		for(b=3;b<=c;b++)
		    if(k%b==0) goto b;
		e++;
		g[e]=k;
b:;}
 for(d=6;d<=n;d+=2){
		for(f=1;f<=e;f++){
			for(h=e;h>=0;h--){
				if(d==g[f]+g[h]){printf("%d=%d+%d\n",d,g[f],g[h]);goto a;}
			if(d>n)break;}
		}
a:;	}
		
	return 0;
}