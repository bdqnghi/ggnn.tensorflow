int main(){
int i,j,x;
char a[105],b[105];
gets(a);
x=strlen(a);
for(j=0;j<x;j++){
	b[j]=0;
} 

for(i=0;i<x;i++){
	if(i==x-1) b[i]=a[i]+a[0];
	else b[i]=a[i]+a[i+1];
}

for(j=0;j<x;j++){
printf("%c",b[j]);
}





return 0;
}
		