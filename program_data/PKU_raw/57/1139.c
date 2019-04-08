int main(){
int n,i,j;
scanf("%d",&n);
char zfc[50][33];
for(i=0;i<n;i++){
scanf("%s",zfc[i]);
}
for(i=0;i<n;i++){
int len=0;
len=strlen(zfc[i]);
for(j=0;j<len-3;j++){
printf("%c",zfc[i][j]);
}
if(zfc[i][len-3]=='i'&&zfc[i][len-2]=='n'&&zfc[i][len-1]=='g'){
printf("\n");
   }
if((zfc[i][len-2]=='e'&&zfc[i][len-1]=='r')||(zfc[i][len-2]=='l'&&zfc[i][len-1]=='y')){
    printf("%c\n",zfc[i][len-3]);
}
else{
printf("\n");
}
}
  
    return 0;
}