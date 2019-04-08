int main()
{
char s[50]=" ";
char w[50]=" ";
scanf("%s%s",s,w);
int a=strlen(s);
int b=strlen(w);
int i;
int t=0;
if(a==1){
for(i=0;i<b;i++){
	if(w[i]==s[0]){

		printf("%d",i);break;}
}}
if(a==2){
for(i=0;i<b;i++){
	if(w[i]==s[0]){if(w[i+1]==s[1]){
		printf("%d",i);break;}}
}}
if(a>=3){t=1;
for(i=0;i<b;i++){
	if(w[i]==s[0]){if(w[i+1]==s[1]){if(w[i+2]==s[2]){
		printf("%d",i);break;}}}
}}	



//printf("%d",t);	
return 0;
}

