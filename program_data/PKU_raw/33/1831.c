main(){
int n,i,j,k;
char chm[257];
scanf("%d\n",&n);
i=0;

while(i<n){
for(j=0;j<257;j++)
chm[j]='\0';
gets(chm);
for(j=0;j<257;j++){
if(chm[j]=='T')
printf("A");
if(chm[j]=='A')
printf("T");
if(chm[j]=='C')
printf("G");
if(chm[j]=='G')
printf("C");
}
printf("\n");
i++;
}

}