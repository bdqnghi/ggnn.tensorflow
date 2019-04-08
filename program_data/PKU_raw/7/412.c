int main()
{
	char s[256], su[256], re[256];
	char t[256]={0};
gets(s);
gets(su);
gets(re);

int i,j=0,len=strlen(s);
int len1=strlen(su);
for(i=0;i<len;i++){
if(s[i]!=su[j]){
j=0;}

else{
	
j++;



}
if(j==len1){

	break;}
}



	if(j!=len1){
	printf("%s",s);
	}
	
int n=i+1;
if(i!=len){
int m=0;
for(n=i+1;n<len;n++){

t[m]=s[n];
m++;
}



int len2=strlen(t);

	s[len-len2-len1]='\0';
	strcat(s,re);
	strcat(s,t);

printf("%s",s);
}
if((i==len)&&(j==len1)){

	
	s[len-len1]='\0';

	strcat(s,re);
printf("%s",s);
}

return 0;}