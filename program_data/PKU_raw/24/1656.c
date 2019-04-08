int main () {
	char s[5000];
	char *ss[50];
	
	int i,n=0,max=0,min=0;
	gets(s);
ss[n++]=s;
for(i=0;s[i];i++){
if(s[i]==' '){
s[i]=0;
ss[n++]=s+i+1;
}
}
for(i=0;i<n;i++){
if(strlen(ss[i])<strlen(ss[min])){
min=i;
}
if(strlen(ss[i])>strlen(ss[max])){
max=i;
}
}
puts(ss[max]);
puts(ss[min]);
return 0;
}

