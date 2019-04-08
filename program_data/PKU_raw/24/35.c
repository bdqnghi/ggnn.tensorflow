int getstr(char str[],char s[],int m,int n){
int i,j=0;
for(i=m+1;i<n;i++,j++)
s[j]=str[i];
for(i=j;i<strlen(s);i++)
s[i]=0;
return 0;
}
int main(){
char snt[300],word[49][20],*p,*q;
int len,label[50]={0},i,j=0,k,l=0;
gets(snt);
len=strlen(snt);
for(i=0;i<len;i++)
if(snt[i]==' ')
label[j++]=i;
for(i=1;i<j;i++)
getstr(snt,word[i],label[i-1],label[i]);
for(k=0;k<label[0];k++)
*(word[0]+k)=*(snt+k);
*(word[0]+k)='\0';
for(k=label[j-1]+1;k<len;k++,l++)
*(word[j]+l)=*(snt+k);
*(word[j]+l)='\0';
p=word[0];
for(k=0;k<j;k++)
if(strlen(word[k+1])>strlen(p))
p=word[k+1];
printf("%s\n",p);
q=word[0];
for(k=0;k<j;k++)
if(strlen(word[k+1])<strlen(q))
q=word[k+1];
printf("%s\n",q);
return 0;
}