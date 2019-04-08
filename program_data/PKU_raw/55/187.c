int change(char a)
{
    int b;
    switch(a)
    {
     case'0':b=0;break;
     case'1':b=1;break;
     case'2':b=2;break;
     case'3':b=3;break;
     case'4':b=4;break;
     case'5':b=5;break;
     case'6':b=6;break;
     case'7':b=7;break;
     case'8':b=8;break;
     case'9':b=9;break;
     case'a':b=10;break;
     case'b':b=11;break;
     case'c':b=12;break;
     case'd':b=13;break;
     case'e':b=14;break;
     case'f':b=15;break;
     case'g':b=16;break;
     case'h':b=17;break;
     case'i':b=18;break;
     case'j':b=19;break;
     case'k':b=20;break;
     case'l':b=21;break;
     case'm':b=22;break;
     case'n':b=23;break;
     case'o':b=24;break;
     case'p':b=25;break;
     case'q':b=26;break;
     case'r':b=27;break;
     case's':b=28;break;
     case't':b=29;break;
     case'u':b=30;break;
     case'v':b=31;break;
     case'w':b=32;break;
     case'x':b=33;break;
     case'y':b=34;break;
     case'z':b=35;break;
     case'A':b=10;break;
     case'B':b=11;break;
     case'C':b=12;break;
     case'D':b=13;break;
     case'E':b=14;break;
     case'F':b=15;break;
     case'G':b=16;break;
     case'H':b=17;break;
     case'I':b=18;break;
     case'J':b=19;break;
     case'K':b=20;break;
     case'L':b=21;break;
     case'M':b=22;break;
     case'N':b=23;break;
     case'O':b=24;break;
     case'P':b=25;break;
     case'Q':b=26;break;
     case'R':b=27;break;
     case'S':b=28;break;
     case'T':b=29;break;
     case'U':b=30;break;
     case'V':b=31;break;
     case'W':b=32;break;
     case'X':b=33;break;
     case'Y':b=34;break;
     case'Z':b=35;break;
     }
     return(b);
    }
char rechange(int a)
{ char b;
 switch(a)
 {
     case 0:b='0';break;
     case 1:b='1';break;
     case 2:b='2';break;
     case 3:b='3';break;
     case 4:b='4';break;
     case 5:b='5';break;
     case 6:b='6';break;
     case 7:b='7';break;
     case 8:b='8';break;
     case 9:b='9';break;
     case 10:b='A';break;
     case 11:b='B';break;
     case 12:b='C';break;
     case 13:b='D';break;
     case 14:b='E';break;
     case 15:b='F';break;
     case 16:b='G';break;
     case 17:b='H';break;
     case 18:b='I';break;
     case 19:b='J';break;
     case 20:b='K';break;
     case 21:b='L';break;
     case 22:b='M';break;
     case 23:b='N';break;
     case 24:b='O';break;
     case 25:b='P';break;
     case 26:b='Q';break;
     case 27:b='R';break;
     case 28:b='S';break;
     case 29:b='T';break;
     case 30:b='U';break;
     case 31:b='V';break;
     case 32:b='W';break;
     case 33:b='X';break;
     case 34:b='Y';break;
     case 35:b='Z';break;
 }
 return(b);
}
  int main()
{
      int a,b;
      char n[10000];
      scanf("%d%s%d",&a,n,&b);
      int x,y;
      int i,j,k;
      x=strlen(n);
      y=change(n[x-1]);
      for(i=0;i<x-1;i++)
      { k=change(n[i]);
        for(j=0;j<x-i-1;j++)
        {k=k*a;}
        y=y+k;      
      }   
      int z;
      char q[10000]={'\0'};
      char *p=q;
      if(y>=b)
      {
      while(y>=b)
      {
       z=y%b;
       *p=rechange(z);
       y=y/b;
       if(y>0&&y<b)
      {*(p+1)=rechange(y);}
       p++;
       }
      }
      else if(y<b)
      {*p=rechange(y);}
       for(i=strlen(q)-1;i>=0;i--)
      {printf("%c",q[i]);}
  return 0;
}