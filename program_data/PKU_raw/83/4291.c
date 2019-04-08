int main(){
	double G=0,P=0,k;
	double c[10];
	int a[10],b[10];
	int n;
	scanf ("%d",&n);
	for (int i=1;i<=n;i++){
		scanf ("%d",&a[i]);
	}
	for (int m=1;m<=n;m++){
		scanf ("%d",&b[m]);
	}
	for (int p=1;p<=n;p++){
		if(b[p]>=90&&b[p]<=100){
			c[p]=4.0*a[p];
		}else if(b[p]>=85&&b[p]<=89){
			c[p]=3.7*a[p];
        }else if(b[p]>=82&&b[p]<=84){
			c[p]=3.3*a[p];
		}else if(b[p]>=78&&b[p]<=81){
			c[p]=3.0*a[p];
        }else if(b[p]>=75&&b[p]<=77){
			c[p]=2.7*a[p];
        }else if(b[p]>=72&&b[p]<=74){
			c[p]=2.3*a[p];
        }else if(b[p]>=68&&b[p]<=71){
			c[p]=2.0*a[p];
		}else if(b[p]>=64&&b[p]<=67){
			c[p]=1.5*a[p];
        }else if(b[p]>=60&&b[p]<=63){
			c[p]=1.0*a[p];
		}else{
			c[p]=0;
		}
	}
	for (int q=1;q<=n;q++){
		G=G+c[q];
	}
	for (int x=1;x<=n;x++){
		P=P+a[x];
	}
	k=1.0*G/P;
	printf("%.2lf",k);
	return 0;
}