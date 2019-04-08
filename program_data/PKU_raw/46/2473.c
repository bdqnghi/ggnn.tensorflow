int main(){
int row,col;
int a[110][110];
int i,j;
int r,l,u,d,cntr,cntc,g;

scanf("%d%d",&row,&col);
for (i=0;i<row;i++){
for (j=0;j<col;j++){
scanf("%d",&a[i][j]);
}
}

r=0;
u=0;
l=row-1;
d=col-1;
cntr=0;
cntc=0;
i=0;
j=0;
g=0;

for(g=0;(g<=row/2+1)&&(g<=col/2+1);g++){
   while ((cntr!=row)&&(cntc!=col)&&(cntr%2==0)&&(cntr-cntc==0)){
   printf("%d\n",a[i][j]);
   if (j==d){
   r++;
           cntr++;
   i++;
}
else if(j!=d){
    j++;
}

   }
  
   while((cntr!=row)&&(cntc!=col)&&(cntc%2==0)){
       printf("%d\n",a[i][j]);
   if (i==l){
    d--;
            cntc++;
j--;
}
    else{
i++;
}
}
while((cntr!=row)&&(cntc!=col)&&(cntr%2!=0)){
printf("%d\n",a[i][j]);
if (j==u){
u++;
cntr++;
i--;
}
else{ 
j--;
}

}
while((cntr!=row)&&(cntc!=col)&&(cntc%2!=0)){
printf("%d\n",a[i][j]);
if (i==r){
l--;
cntc++;
j++;
}
else{ 
i--;
} 
}
}

return 0;
}