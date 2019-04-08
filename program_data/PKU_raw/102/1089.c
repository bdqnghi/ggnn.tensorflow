int main(){
int i,n,a,b,j,c,d;
a=0;
b=0;
double z,f[40],m[40];
char sex[7];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",sex);
c=strcmp(sex,"male");
d=strcmp(sex,"female");
if(c==0){
scanf("%lf",&m[a]);
a++;
}else if(d==0){
scanf("%lf",&f[b]);
b++;
}
}

for(i=0;i<a;i++){
	for(j=a-1;j>0;j--){
		if(m[j]<m[j-1]){
			z=m[j];
			m[j]=m[j-1];
			m[j-1]=z;
		}
	}
	printf("%.2lf ",m[i]);
}

for(i=0;i<b;i++){
	for(j=b-1;j>0;j--){
		if(f[j]>f[j-1]){
			z=f[j];
			f[j]=f[j-1];
			f[j-1]=z;
		}
	}
	if(i==b-1){
	printf("%.2lf",f[i]);
	}else{
	printf("%.2lf ",f[i]);
	}
}


return 0;
}