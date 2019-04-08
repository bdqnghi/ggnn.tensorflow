int main(){
int n,i,j=0,k=0,o,p;
char u[10];
double v[50],m[40],f[40],t;
scanf("%d",&n);
for(i=0;i<n;i++){
 
	scanf("%s",u);
	scanf("%lf",&v[i]);
	if(u[0]=='m'){m[j]=v[i];j++;}
	else if(u[0]=='f'){f[k]=v[i];k++;}
}
for(i=0;i<j;i++){

	for(o=0;o<i;o++){
	
		if(m[o]>m[i]){
		
			t=m[o];
			m[o]=m[i];
			m[i]=t;

		}
	}

}
for(i=0;i<k;i++){

	for(p=0;p<=i;p++){
	
		if(f[p]<f[i]){
		
			t=f[p];
			f[p]=f[i];
			f[i]=t;

		}
	}

}
for(i=0;i<j;i++){
printf("%.2lf ",m[i]);

}for(i=0;i<k-1;i++){
printf("%.2lf ",f[i]);

}
printf("%.2lf",f[k-1]);
return 0;
}