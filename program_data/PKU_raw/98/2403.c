
int main()
{
 int n,i,l[1000],count=0;
 char s[1000][40];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%s",s[i]);
   l[i]=strlen(s[i]);
 }
 for(i=-1;i<n;i)
 {
   i++;
   printf("%s",s[i]);
   count=l[i]+l[i+1]+1;
   while(count<=80&&i<n-1)
   {
     i++;
     printf(" ");
     printf("%s",s[i]);
     count+=1+l[i+1];
   }
   printf("\n");
}

  return 0;
}