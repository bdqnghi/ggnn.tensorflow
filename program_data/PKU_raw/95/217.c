
char s1[100],s2[100];

void strlwr()
{
     int i,len1,len2;
     len1=strlen(s1);
     len2=strlen(s2);
     for (i=0;i<len1;i++)
     {
         if (s1[i]>='A' && s1[i]<='Z')
         {
                        s1[i]=s1[i]-('A'-'a');
         }
     }
     for (i=0;i<len2;i++)
     {
         if (s2[i]>='A' && s2[i]<='Z')
         {
                        s2[i]=s2[i]-('A'-'a');
         }
     }
} 

int main()
{
    int re;
    gets(s1);
    gets(s2);
    strlwr();
    re=strcmp(s1,s2);
    if (re==0) cout<<"=";
    if (re>0) cout<<">";
    if (re<0) cout<<"<";
    return 0;
}
