int main(){
int i,n,m=0,k=0,p=1,sl[500],max=0,min,a=0,b=0;
char s[500],f[200][50];
gets(s);
n=strlen(s);
for(i=0;i<n;i++){
	if((s[i]!=' ')&&(s[i]!=',')){
	f[m][k]=s[i];
	k++;
	}else if(((s[i]==' ')||(s[i]==','))&&((s[i-1]!=' ')&&(s[i-1]!=','))){
	f[m][k]='\0';
	m++;
	k=0;
	p++;
	}else{
	m=m;
	k=0;
	p=p;
	}
	f[m][k]='\0';
	
}
for(i=0;i<p;i++){
sl[i]=strlen(f[i]);
}
for(i=0;i<p;i++){
	if(max<sl[i]){
	max=sl[i];
	a=i;
	}else{
	max=max;
	a=a;
	}
	
}
min=max;
for(i=0;i<p;i++){
	if(min>sl[i]){
	min=sl[i];
	b=i;
	}else{
	min=min;
	b=b;
	}
}
printf("%s\n" ,f[a]);
printf("%s" ,f[b]);
return 0;
}