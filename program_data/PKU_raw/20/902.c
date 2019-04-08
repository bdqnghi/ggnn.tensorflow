

int main ()

{

       char str[13];

       char sub[4];

       int i,la;

       int max,t;

       while (scanf ("%s %s",str,sub)!=EOF)

       {

              max=0;

              la=strlen (str);

              for (i=0;i<la;i++)

              {

                     if (max<str[i]) {t=i;max=str[i];}     // ???????? 

              }

              for (i=la-1;i>t;i--)

              {

                     str[i+3]=str[i];  //?????? ????????????

              }

              str[t+1]=sub[0];

              str[t+2]=sub[1];

              str[t+3]=sub[2];

              for (i=0;i<la+3;i++)

              printf ("%c",str[i]);

              printf ("\n");

       }

       return 0;

}
