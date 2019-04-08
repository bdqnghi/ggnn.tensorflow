void main(){
int n,i,j,min;
float re[40],t;
char str[40][8],tc[8];
scanf("%d",&n);
for(i=0;i<n;i++){
getchar();
scanf("%s%f",str[i],&re[i]);
}
for(i=0;i<n;i++){
min=i;
for(j=i;j<n;j++){
if(re[j]<re[min]){
min=j;
}
}
t=re[min];
strcpy(tc,str[min]);
re[min]=re[i];
strcpy(str[min],str[i]);
re[i]=t;
strcpy(str[i],tc);
}
for(i=0;i<n;i++){
if(str[i][0]=='m')
printf("%.2f ",re[i]);
}
i=n-1;
while(str[i][0]=='m')
i--;
printf("%.2f",re[i]);
for(i=i-1;i>=0;i--){
if(str[i][0]=='f')
printf(" %.2f",re[i]);
}
}