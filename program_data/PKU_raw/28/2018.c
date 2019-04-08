int main(){
 int k,i,j=0,m=0;
 int s[300];
 char sz[3000];
  k=strlen(sz);
    gets(sz);
for(i=0;sz[i]!=0;i++){
if(sz[i]!=32)
m++;
else{
s[j]=m;
if(m!=0) j++;
m=0;
 }
  }
s[j]=m;
for(i=0;i<j;i++){
printf("%d,",s[i]);
}
printf("%d",s[j]);
return 0;
   }
