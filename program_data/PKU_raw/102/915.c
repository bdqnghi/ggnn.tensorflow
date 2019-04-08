int main(){
int n,i,a1,a2,j;
double man[40],woman[40],b1,b2;
char s[7];
a1=0;
a2=0;
scanf("%d",&n);
for(i=0;i<n;i++){
 scanf("%s",&s);
 if(s[0]=='m'){scanf("%lf",&man[a1]);  a1++;}
 if(s[0]=='f'){scanf("%lf",&woman[a2]);  a2++;}
}
for(i=0;i<a1-1;i++){
 for(j=0;j<a1-1-i;j++){
  if(man[j]>man[j+1]){
   b1=man[j+1];
   man[j+1]=man[j];
   man[j]=b1;
}
}
}
for(i=0;i<a2-1;i++){
 for(j=0;j<a2-1-i;j++){
  if(woman[j]<woman[j+1]){
   b2=woman[j+1];
   woman[j+1]=woman[j];
   woman[j]=b2;
}
}
}
for(i=0;i<a1;i++){printf("%.2lf ",man[i]);}
for(i=0;i<a2-1;i++){printf("%.2lf ",woman[i]);}
printf("%.2lf",woman[a2-1]);
return 0;
}