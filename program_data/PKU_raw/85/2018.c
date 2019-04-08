int main() {  
char zf[100][21]; 
int n,i,j;
int m=0;
scanf("%d",&n); 
for(i=0;i<n;i++){
scanf("%s",zf[i]);}

for(j=0;j<n;j++){
    int flag = 0;
   for(i=0;zf[j][i]!='\0';i++){
        if(!((zf[j][i]=='_')||
            (zf[j][i]>='A'&&zf[j][i]<='Z')
            ||(zf[j][i]>='a'&&zf[j][i]<='z')
            ||(zf[j][i]>='0'&&zf[j][i]<='9'&&i>0))){
                printf("no\n");
                flag = 1;
                break;
            }            
   }
   if (flag == 0)printf("yes\n");
}

   return 0;
}



