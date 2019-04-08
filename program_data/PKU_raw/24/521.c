void main ()
{
int i,n,b[50],m,t,p,q;
char s[50][30],c=0;
for (n=0;c!='\n';n++) 
 scanf ("%s%c",&s[n],&c);    
for(i=0;i<n;i++)
 b[i]=strlen(s[i]);
m=t=b[0];
p=q=0;
for (i=1;i<n;i++)
{
 if(b[i]>m)
  {
   m=b[i];
   p=i;
   }
 if(b[i]<t)
  {
   t=b[i];
   q=i;
   }
}
printf ("%s\n%s\n",s[p],s[q]);
}

   