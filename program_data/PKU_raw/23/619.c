int main()
{
 char s1[101],s2[101];
 int k1,k2;
 int l1,l2=0;
 cin.getline(s1,101);
 l1=strlen(s1);
 k1=l1-1;k2=l1-1;
 for(int i=l1-1;i>=0;i--)
 {
   if(s1[i]==' '||i==0)
  {
   k1=i;
   if(i==0)
    if(k2==l1-1)
    {k1-=1;}
    else
    {k1-=1;k2-=1;}
   for(int j=k1+1;j<=k2;j++)
   {
    s2[j-k1-1+l2]=s1[j];
   }
   l2+=k2-k1;
   if(k2==l1-1&&k1!=-1)
   {s2[l2]=' ';l2++;}
   k2=k1;
  }
 }
 s2[l2]='\0';
 cout<<s2;
 return 0;
}