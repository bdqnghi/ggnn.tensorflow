int main()
{
  int k,g,r,n,i,j,x=0;
  char s[50],w[50];
  scanf("%s %s",s,w);
  k=strlen(s);
  g=strlen(w);
  for(i=0;i<g;i++) 
   { 
    if(w[i]==s[x])
     {
            r=i;
break;

     }
       }
   printf("%d",r);
  return 0;
}
              