
void main(){
int t,n,i,l,j,m,k,x;
char s[800],a[500],b[500];
gets(s);
for(i=0;s[i]!=' ';i++){
a[i]=s[i];
}
a[i]='\0';
i++;
for(j=0;s[j+i]!='\0';j++){
b[j]=s[j+i];
}
b[j]='\0';
t=0;
if(i-1==j){
for(k=0;a[k]!='\0';k++){
	for(l=0;b[l]!='\0';l++){
	x=0;
	  if(a[k]==b[l]){
	  b[l]=' ';
	  x=1;
	  break;
	  }
	}
	if(x==0){
		printf("NO");
		break;
	}
if(a[k+1]=='\0')printf("YES");
  }
}else{
	printf("NO");
}
}