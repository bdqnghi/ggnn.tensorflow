int main(){
int y,q,n,i,m,l;
double p,k;
char sz[500],dz[500];
scanf("%lf",&p);
scanf("%s",sz);
scanf("%s",dz);
m=0;
y=0;
n=0;
l=0;
n=strlen(sz);
q=0;
m=strlen(dz);
if(m!=n){
printf("error");
}else{
    for(i=0;i<n;i++){
        if(sz[i]!='A'&&sz[i]!='T'&&sz[i]!='C'&&sz[i]!='G'){
			y++;
			printf("error");
			break;
		}
		if(dz[i]!='A'&&dz[i]!='T'&&dz[i]!='C'&&dz[i]!='G'){
			l++;
    	   printf("error");
		   break;
		}
	}
	if(l==0&&y==0){
for(i=0;i<n;i++){
	if(sz[i]==dz[i]){
	q++;
	}
}
k=1.0*q/n;
if(k>p){
printf("yes");
}else{
printf("no");
}
}
}
return 0;
}
