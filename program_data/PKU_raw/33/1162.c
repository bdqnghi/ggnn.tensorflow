int main()
{
int n,i,j,e;
char w[1000][256];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",w[i]);
e=strlen(w[i]);
for(j=0;j<e;j++){
if(w[i][j]=='A'){
printf("T");
}else if(w[i][j]=='T'){
printf("A");
}else if(w[i][j]=='C'){
printf("G");
}else{
printf("C");
}
}
printf("\n");
}
return 0;
}
