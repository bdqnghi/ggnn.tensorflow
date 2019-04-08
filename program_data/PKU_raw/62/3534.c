int main(){
    int n,m,k,h,g,l,p;
    char zfc[200],zfc1[200],e,a;
    gets(zfc);
    m=strlen(zfc);
    p=0;
    zfc1[0]=zfc[0];
   for(k=1;k<n;k++){
       if(zfc[k]==' '&&zfc[k-1]!=' '){p++;
       zfc1[p]=zfc[k];
       }
       else if(zfc[k]!=' '){p++;
       zfc1[p]=zfc[k];
       }
   }
      printf("%s",zfc1);
   return 0;
}


