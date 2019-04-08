int main(){

int i,n,k=0,p=1,m=0;
char a[1000],b[300][50];
gets(a);
n=strlen(a);
for(i=0;i<n;i++){
	if(a[i]!=' '){
	b[m][k]=a[i];
	k++;
	
	}else if((a[i]==' ')&&(a[i-1]!=' ')){
	b[m][k]='\0';
	m++;
	k=0;
	p++;
	}else{
	m=m;
	k=0;
	p=p;
	}
	
}
b[m][k]='\0';
if(p==1){
printf("%d" ,strlen(b[0]));
}else{
for(i=0;i<p-1;i++){
printf("%d," ,strlen(b[i]));
}
printf("%d" ,strlen(b[p-1]));
}

return 0;
}

