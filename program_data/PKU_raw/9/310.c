int main(){
int n,i;
    int age[100],a,m=0,tmp1[100],d=0;
char zfc[100][11],tmp2[100][11];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",zfc[i]);
    scanf("%d",&age[i]);
}
for(i=0;i<n;i++){
if(age[i]>=60){
strcpy(tmp2[m],zfc[i]);
tmp1[m]=age[i];
m++;
}
}
for(a=m-1;a>0;a--){
for(d=0;d<a;d++){
if(tmp1[d]<tmp1[d+1]){
char s[200];
strcpy(s,tmp2[d]);
strcpy(tmp2[d],tmp2[d+1]);
strcpy(tmp2[d+1],s);
int y;
y=tmp1[d];
tmp1[d]=tmp1[d+1];
tmp1[d+1]=y;
}
}
}
for(a=0;a<m;a++){
printf("%s\n",tmp2[a]);
}
for(i=0;i<n;i++){
if(age[i]<60){
printf("%s\n",zfc[i]);
}
}
return 0; 
}