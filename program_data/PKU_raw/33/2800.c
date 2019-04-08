int main(){
int i,p,n,q;
scanf("%d",&n);
for(i=0;i<n;i++){
	char a[256];
	char b[256];
scanf("%s",a);
p=strlen(a);
for(q=0;q<p;q++){
	if(a[q]=='A'){
	b[q]='T';
	}else if(a[q]=='T'){
	b[q]='A';
	}else if(a[q]=='G'){
	b[q]='C';
	}else if(a[q]=='C'){
	b[q]='G';
	}
	}
b[q]='\0';
printf("%s\n",b);
}
return 0;
}