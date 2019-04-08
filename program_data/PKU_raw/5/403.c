int main(){
char a[51],b[51];
int i,j=0,k;
double n,t;
scanf("%lf",&n);
scanf("%s",a);//gets(a);
scanf("%s",b);//gets(b);
if(strlen(a)!=strlen(b)){printf("error");}
else{
	for(i=0;a[i]!='\0';i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){printf("error");return 0;}
	}
for(i=0;b[i]!='\0';i++){
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){printf("error");return 0;}
	}
for(i=0;a[i]!='\0';i++){
if(a[i]==b[i]){j++;}
}

k=strlen(a);
t=1.0*j/k;
if(t>n){printf("yes");}
else{printf("no");}
}
return 0;
}
