int main(){
int m,e,n,i,j,k,a[101],b[101],c[101];
char ex[11],s[101][11],s1[101][11],s2[101][11];
scanf("%d",&n);
for(i=0,j=0,k=0;i<n;i++){
scanf("%s %d",s[i],&a[i]);
if(a[i]>=60){
strcpy(s1[j],s[i]);
b[j]=a[i];
            j++;
}
else{
strcpy(s2[k],s[i]);
c[k]=a[i];
k++;
}
}
for(m=1;m<=j;m++){
for(i=0;i<j-m;i++){
if(b[i]<b[i+1]){
strcpy(ex,s1[i]);
strcpy(s1[i],s1[i+1]);
strcpy(s1[i+1],ex);
e=b[i];
b[i]=b[i+1];
b[i+1]=e;
}
}
}
for(i=0;i<j;i++){
printf("%s\n",s1[i]);
}
for(i=0;i<k;i++){
printf("%s\n",s2[i]);
}
return 0;
}