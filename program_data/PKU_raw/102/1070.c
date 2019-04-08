int main(){
	int n,i,j=0,k=0,a,b,p=0,q=0;
	double sz[50],f[50],m[50],e,t;
	char s[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",s,&(sz[i]));
		if(s[0]=='f'){
			f[j]=sz[i];
			j++;
			p++;

		}
		if(s[0]=='m'){
			m[k]=sz[i];
			k++;
			q++;
		}
	}
		for(a=1;a<=q;a++){
			for(k=0;k<q-a;k++){
				if(m[k]>m[k+1]){
				e=m[k];
				m[k]=m[k+1];
				m[k+1]=e;
			}
			}
		}
		for(b=1;b<=p;b++){
			for(j=0;j<p-b;j++){
				if(f[j]>f[j+1]){
					t=f[j];
					f[j]=f[j+1];
					f[j+1]=t;
				}
			}
		}
		for(k=0;k<q;k++){
			printf("%.2lf ",m[k]);
		}
		for(j=p-1;j>0;j--){
			printf("%.2lf ",f[j]);
		}
		printf("%.2lf",f[0]);
		return 0;
	}