//*************************
//*  ?????????? 
//*  ????? 
//*  ???1200012941 
//*  ???2012?12?2? 
//*************************
int main()
{
      int i, j;
      char str[100];
      cin.getline(str, 100);
      int len = strlen(str);
      int flag = 0;
      char *p = NULL;
      for (p = str; *p != '\0' ; p++)
      {
           if (*p == ' ')
           {
              if (flag == 0)
              {
                  flag = 1;
              }
              else
              {
                  while (*p == ' ')
                  {
                         for (char *pp = p; *pp != '\0'; pp++)
                         {
                              *pp = *(pp + 1);
                         }
                  }
                  flag = 0;
              }
           }
           else
           {
               flag = 0;
           }
      }
      for (p = str; *p != '\0'; p++)
      {
          cout << *p; 
      }
      return 0;
}