int main()
{
   int n,j,i,a[100],e;
   char zf1[100],zf2[100]="\0",zf[100][100];
   for (i=0;i<50;i++){
        scanf("%s",&zf[i]);
        a[i]=strlen(zf[i]);
   }
   n=i-1;
   for (j=0;j<49;j++){
        for (i=0;i<49-j;i++){
            if (a[i]>a[i+1]){
                strcpy(zf1,zf[i+1]);
                strcpy(zf[i+1],zf[i]);
                strcpy(zf[i],zf1);
                e=a[i];
                a[i]=a[i+1];
                a[i+1]=e;
            }
        }
   }
   printf("%s\n%s",zf[49],zf[0]);
   for (i=0;i<49;i++){
       if (strcmp(zf[i],zf2)!=0){
           printf("%s",zf[i]);
           break;
       }      
   }
   return 0;
}
