
int main (){
  int n,i,j,m,k;
  scanf("%d",&n);
  char a[260];
  char b[260];
  for(i=0;i<n;i++)
  {
   scanf("%s",&a);

   for(j=0,k=0;a[j]!='\0';j++,k++)
   {
    if(a[j]=='A'){
     b[k]='T';
    } else if(a[j]=='T'){
      b[k]='A';
    }else  if(a[j]=='G'){
      b[k]='C';
    }  else if(a[j]=='C'){
      b[k]='G';
    }
   }
   b[k]='\0';
   printf("%s\n",b);
  }
       return 0;
}

