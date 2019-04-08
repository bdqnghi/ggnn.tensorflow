int main()
{
	char a[501]={0};
	char b[501]={0};
int i,n;
double e,s=0,c;
scanf("%lf",&e);
scanf("%s",a);
scanf("%s",b);
if(strlen(a)!=strlen(b)){
	printf("error");
	return 0;
}
else {
	for(i=0;a[i]!='\0';i++){
	if	((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')&&
		(b[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')){
		printf("error");
			return 0;
	}

else {
n=strlen(a);

	
	
 if(a[i]==b[i]){
		s++;
	}
}
	}
}

c=s/n;

if(c>e){
	printf("yes\n");
}
else if(c<=e){
	printf("no\n");
}

		
return 0;
}
