int main(){  
   char str[11]={0},substr[4],str1[10][14]={0}; int i,k,j,m=0;
  while(scanf("%s%s",str,substr)!=EOF)
  {  k=0;
   for(i=1;i<strlen(str);i++)
    if(str[i]>str[k])   k=i;
    for(i=strlen(str)+2;i>k+3;i--)
       str1[m][i]=str[i-3];
    for(i=0;i<=k;i++)
      str1[m][i]=str[i];
          j=0;
    for(i=k+1;i<k+4;i++,j++)
      str1[m][i]=substr[j];
     m++;
      } 
   for(i=0;i<m;i++)
   printf("%s\n",str1[i]);
return 0;
}
