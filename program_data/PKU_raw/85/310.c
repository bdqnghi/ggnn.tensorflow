

int is_legal(char name[20], int length);
int first_lg(char trig);
int illegal_sym(char name[20], int length);
main()
{
      int n;
      int length;
      int i;
      char name[100][20];
      int ok[100];

      scanf("%d", &n);
      
      for(i = 0;i <= n - 1;i ++)
      {
            scanf("%s", &name[i]);
            length = strlen(name[i]);
      
            ok[i] = is_legal(name[i], length);
      }
      
      for(i = 0;i <= n - 1;i ++)
      {
       if(ok[i]) printf("yes\n"); else printf("no\n");
       }
}

int is_legal(char name[20], int length)
{
    //printf("First char:%d\n", first_lg(name[0]));
    //printf("General:%d\n", illegal_sym(name, length));
    if(!first_lg(name[0])) return FALSE;
    if(!illegal_sym(name, length)) return FALSE;
    return TRUE;
}

int first_lg(char trig)
{
    int is1, is2, is3;
    char ch;
    
    ch = (toupper(trig));
    
    is1 = (ch > 'Z');
    is2 = (ch < 'A');
    
    if(trig == '_') return TRUE;
    if(is1 + is2 != 0) return FALSE;
    return TRUE;
}

int illegal_sym(char name[20], int length)
{
    int i;
    char ch;
    int is_al, is_num, is_dash;
    int is;
    for(i = 0;i <= length - 1;i ++)
    {
          ch = toupper(name[i]);
          is_al = (ch <= 'Z') && (ch >= 'A');
          is_num = (ch <= '9') && (ch >= '0');
          is_dash = (ch == '_');
          is = (is_al || is_num || is_dash);
          
          if(!is)
          {
                 //printf("Bug section:%d\nchar:%c\n", i + 1, ch);
                 return FALSE;
          }
    }
    return TRUE;
}
          
