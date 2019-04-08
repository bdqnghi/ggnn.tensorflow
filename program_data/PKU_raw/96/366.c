int main ()
{
    char beichushu[101],shang[100];
    const int chushu=13;
    int a,b,i,c,d;
    gets (beichushu);
    a=strlen (beichushu);
if (a==1) printf ("0\n%s",beichushu);
else if (a==2) {c=((beichushu[0]-'0')*10+beichushu[1]-'0')/chushu;
                      d=((beichushu[0]-'0')*10+beichushu[1]-'0')%chushu;
                      printf("%d\n%d",c,d);}
else
{
    b=(beichushu[0]-'0')*10+(beichushu[1]-'0');
    if (b<13)
    {
            for (i=0;i<=a-3;i++)
            {
                b=b*10+beichushu[i+2]-'0';
                shang[i]=b/chushu+'0';
                b=b%chushu;
            }
            
            shang[a-2]='\0';
            printf ("%s\n%d",shang,b);
     }
     else
     {
         for (i=0;i<=a-3;i++)
         {
             shang[i]=b/chushu+'0';
             b=b%chushu;
             b=b*10+beichushu[i+2]-'0';
         }
         shang[a-2]=b/chushu+'0';
         b=b%chushu;
         shang[a-1]='\0';
         printf ("%s\n%d",shang,b);
     }
}
return 0;
}