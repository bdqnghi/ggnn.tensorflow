int main(){
char str[100],sub[100],rep[100];
int i,j,m,len,lens;
scanf("%s\n%s\n%s",str,sub,rep);
len=strlen(str);
lens=strlen(sub);

for(i=0;i<len;i++){
if(str[i]==sub[0]&&str[i+1]==sub[1]&&str[i+lens-1]==sub[lens-1]){
j=i;m=0;
while(m<lens){
str[j]=rep[m];
j++;m++;}
break;}}
for(i=0;i<len;i++){
printf("%c",str[i]);}
return 0;}



