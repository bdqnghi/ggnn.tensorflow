int main()
{
 int l,i,k=0,nSpace=0;
 char a[1000],b[1000];
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
   if(nSpace<1){
     b[k]=a[i];
     k++;}
   if(a[i]==' ')
     nSpace ++;
   if(a[i+1]!=' ')
     nSpace=0; 
 }
 b[k]='\0';
 puts(b);
 return 0;
}