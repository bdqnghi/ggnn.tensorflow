int main(){
char b[33],a[22],z[22],q[1];
int i,j,l,n=0;
gets(b);
for(i=0,j=0;b[i]!=' ';i++,j++){
a[j]=b[i];
}
for(i=j+1,l=0;b[i]!='\0';i++,l++){
z[l]=b[i];
}
z[l]=='\0';
for(l=0;z[l]!='\0';l++){
	if(z[l]==a[0]&&z[l+1]==a[1]){
	break;
	}
	n++;
}
printf("%d",n);
return 0;}