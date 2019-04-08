int main(){
	
	int a[100],b[100],c[100],d[100],e[100],f[100];

	int x,y,z,t=0;
	for(int i=0;i<1000;i++){

		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0){
				t=i;
		     break;
		}
	}
		for(int q=0;q<t;q++){
		    x=a[q]*60*60+b[q]*60+c[q];
	         y=(d[q]+12)*60*60+e[q]*60+f[q];
	         z=y-x;
	         printf("%d\n",z);
	
		}

		 

            
		




	return 0;
}