int main(){
	int n,i,j,h=0,i1,j1,m,h1=0,i2,j2;
	char s[100][100];
	double a[100],b[100]={0},c[100]={0},t1,t,min;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",s[i],&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<=1;j++){
			if(s[i][j]=='m'){
				b[h]=a[i];
				h++;
	
			}
		}
	}
		for(i1=1;i1<=h;i1++){
			for(j1=0;j1<h-i1;j1++){
				if(b[j1]>b[j1+1]){
					t1=b[j1];
					b[j1]=b[j1+1];
					b[j1+1]=t1;
					
				}
			}
		}
     
	for(i=0;i<n;i++){
		for(j=0;j<=1;j++){
			if(s[i][j]=='f'){
				c[h1]=a[i];
				h1++;
		
			}
		}
	}
		for(i2=1;i2<=h1;i2++){
			for(j2=0;j2<h1-i2;j2++){
				
				if(c[j2]<c[j2+1]){
					
					t=c[j2];
					c[j2]=c[j2+1];
					c[j2+1]=t;
				
				}
			}
		
		}
		for(j=0;j<h;j++){
			printf("%.2lf ",b[j]);
		}
		for(i=0;i<h1-1;i++){
			printf("%.2lf ",c[i]);
		}for(i=0;i<h1;i++){
			if(i==h1-1){
			printf("%.2lf",c[i]);
			}
		}
	
	return 0;
}