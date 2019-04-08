int main()
{
    char m[1000];
    scanf ("%s",m);
    int i;
    char t;
    int r;
    i=0;
    while (m[i]!='\0')
     {
        if ((m[i]>='a')&&(m[i]<='z'))
        m[i]=m[i]-32;
        i++;
      }
    i=0;
    while (m[i]!='\0')
     {
       r=0;
       t=m[i];
       while (t==m[i])
       {
         r++;
         i++;
        }
       
       printf ("(%c,%d)",t,r);
       }
     return 0;
}