int main(){
int n;
scanf("%d",&n);
int a[100];
int b[100];
for(int i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
}
int s[100];
for(int m=0;m<n;m++){
if(a[m]>=90&&a[m]<=140&&b[m]>=60&&b[m]<=90){
s[m]=1;
}
else{
s[m]=0;
}
}
int q=1;
for(int k=0;k<n-1;k++){
if(s[k]!=0&&s[k+1]!=0){
s[k+1]=s[k]+1;
}
}
int max=0;
for(int p=0;p<n;p++){
if(s[p]>=max){
max=s[p];
}
}
printf("%d",max);
return 0;
}