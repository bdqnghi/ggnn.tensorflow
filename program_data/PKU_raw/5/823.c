int main()
{
int j,i,q=0,a,b,d=0,e=0,l,g;
float c,n;
char s1[500],s2[500];
scanf("%f\n",&n);
scanf("%s\n%s",s1,s2);
if(strlen(s1)!=strlen(s2))printf("error");
if(strlen(s1)==strlen(s2)){
for(i=0;s1[i]!='\0';i++){
	if(s1[i]!='A'&&s1[i]!='T'&&s1[i]!='G'&&s1[i]!='C'){
		d++;
}
}
for(j=0;s2[j]!='\0';j++){
	if(s2[j]!='A'&&s2[j]!='T'&&s2[j]!='G'&&s2[j]!='C'){
		e++;
}
}
l=strlen(s1);
for(int k=0;k<l;k++){
	if(s1[k]==s2[k])q++;
}
a=strlen(s1);
b=q;
c=(float)b/(float)a;
g=d+e;
if(g!=0){
	printf("error");
}else{
	if(c>=n)printf("yes");
    if(c<n)printf("no");
}
}

return 0;
}
