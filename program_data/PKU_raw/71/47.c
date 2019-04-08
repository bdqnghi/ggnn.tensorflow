void main()
{
int n;
scanf("%d",&n);
int i,j;
int b[2];
int month[200][2];
int year[200];
for(i=0;i<n;i++){
scanf("%d %d %d",&year[i],&month[i][1],&month[i][2]);
}
int a1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int a2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
for(i=0;i<n;i++){
if((year[i]%400)!=0&&(year[i])%4!=0){
int m1=month[i][1];
int m2=month[i][2];
b[0]=0;
b[1]=0;
int sum1=0;
int sum2=0;
for(j=1;j<m1;j++){
sum1=sum1+a1[j-1];
}
for(j=1;j<m2;j++){
sum2=sum2+a1[j-1];
}
b[0]=sum1+1;
b[1]=sum2+1;
if((b[0]-b[1])%7==0){
printf("YES\n");}
else{
printf("NO\n");
}
}
else if((year[i]%100)!=0&&(year[i])%4==0){
int m1=month[i][1];
int m2=month[i][2];
b[0]=0;
b[1]=0;
int sum1=0;
int sum2=0;
for(j=1;j<m1;j++){
sum1=sum1+a2[j-1];
}
for(j=1;j<m2;j++){
sum2=sum2+a2[j-1];
}
b[0]=sum1+1;
b[1]=sum2+1;
if((b[0]-b[1])%7==0){
printf("YES\n");}
else{
printf("NO\n");
}
}


else if((year[i]%400)==0){
int m1=month[i][1];
int m2=month[i][2];
b[0]=0;
b[1]=0;
int sum1=0;
int sum2=0;
for(j=1;j<m1;j++){
sum1=sum1+a2[j-1];
}
for(j=1;j<m2;j++){
sum2=sum2+a2[j-1];
}
b[0]=sum1+1;
b[1]=sum2+1;
if((b[0]-b[1])%7==0){
printf("YES\n");}
else{
printf("NO\n");
}
}

else if((year[i]%400)!=0){
int m1=month[i][1];
int m2=month[i][2];
b[0]=0;
b[1]=0;
int sum1=0;
int sum2=0;
for(j=1;j<m1;j++){
sum1=sum1+a1[j-1];
}
for(j=1;j<m2;j++){
sum2=sum2+a1[j-1];
}
b[0]=sum1+1;
b[1]=sum2+1;
if((b[0]-b[1])%7==0){
printf("YES\n");}
else{
printf("NO\n");
}
}


}


}