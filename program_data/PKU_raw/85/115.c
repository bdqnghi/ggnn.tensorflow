int change(char m)
{
 int n;
 switch(m)
  {
   case '0':n=0;break;
   case '1':n=0;break;
   case '2':n=0;break;
   case '3':n=0;break;
   case '4':n=0;break;
   case '5':n=0;break;
   case '6':n=0;break;
   case '7':n=0;break;
   case '8':n=0;break;
   case '9':n=0;break;
   case'A':n=0;break;
     case'B':n=0;break;
     case'C':n=0;break;
     case'D':n=0;break;  
     case'E':n=0;break;
     case'F':n=0; break;    
     case'G':n=0;break;
     case'H':n=0;break;        
     case'I':n=0;break;
     case'J':n=0;break;     
     case'K':n=0;break;
     case'L':n=0;break;         
     case'M':n=0;break;
     case'N':n=0;break;     
     case'O':n=0;break;        
     case'P':n=0;break;
     case'Q':n=0;break;    
     case'R':n=0;break;
     case'S':n=0;break;        
     case'T':n=0;break;
     case'U':n=0;break;
     case'V':n=0;break;
     case'W':n=0;break;      
     case'X':n=0;break;
     case'Y':n=0;break;   
     case'Z':n=0;break; 
     case'a':n=0;break;
     case'b':n=0;break;
     case'c':n=0;break;
     case'd':n=0;break;  
     case'e':n=0;break;
     case'f':n=0; break;    
     case'g':n=0;break;
     case'h':n=0;break;        
     case'i':n=0;break;
     case'j':n=0;break;     
     case'k':n=0;break;
     case'l':n=0;break;         
     case'm':n=0;break;
     case'n':n=0;break;     
     case'o':n=0;break;        
     case'p':n=0;break;
     case'q':n=0;break;    
     case'r':n=0;break;
     case's':n=0;break;        
     case't':n=0;break;
     case'u':n=0;break;
     case'v':n=0;break;
     case'w':n=0;break;      
     case'x':n=0;break;
     case'y':n=0;break;   
     case'z':n=0;break; 
     case'_':n=0;break;
     default:n=1;break;
     }
     return(n); 
}
int main()
{
  int n;
  scanf("%d\n",&n);
  char s[1000][20];
  int i,j;
  for(i=0;i<n;i++)
  {
   scanf("%s\n",s[i]);
  }
  for(i=0;i<n;i++)
  {
   int x,y;
   y=0;
   x=strlen(s[i]);
   if(change(s[i][0])==1||(change(s[i][0])==0&&(s[i][0]=='0'||s[i][0]=='1'||s[i][0]=='2'||s[i][0]=='3'||s[i][0]=='4'||s[i][0]=='5'||s[i][0]=='6'||s[i][0]=='7'||s[i][0]=='8'||s[i][0]=='9')))
   {y=1;}
   else
   {
    for(j=1;j<x;j++)
    {
     if(change(s[i][j])==1)
     {y=1;break;}
    }
   }
   if(y==0)
   printf("yes\n");
   else if(y==1)
   printf("no\n");
  }
	return 0;
}