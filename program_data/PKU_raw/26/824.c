int main()
{  
   char a[max+1],b[max+1];
   int i,j=0;
   gets(a);
   for(i=0;a[i]!='\0';i++){
       if(!(a[i]==' '&&a[i+1]==' ')){
       b[j++]=a[i];
    }
}
   b[j]='\0';
printf("%s",b);
return 0;
}
