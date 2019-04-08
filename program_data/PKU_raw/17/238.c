
int main()
{char a[101],b[101];

int n,p,g,t,j,i,q,m;
while(gets(a)!='\0'){
n=strlen(a);strcpy(b,a);

for(j=0;j<n;j++){
	if(a[j]==')'){t=0;
for(p=j-1;p>=0;p--){
if(a[p]=='(')
{a[p]=' ';a[j]=' ';t=1;break;
}
}
if(t!=1)
a[j]='?';}}
for(i=0;i<n;i++)
	if(a[i]=='(')a[i]='$';
	for(q=0;q<n;q++)
		if(a[q]!='$'&&a[q]!='?')a[q]=' ';for(m=0;m<n-1;m++)printf("%c",b[m]);printf("%c\n",b[n-1]);
		for(g=0;g<n-1;g++)
			printf("%c",a[g]);
		printf("%c\n",a[n-1]);}
	







	return 0;
}

