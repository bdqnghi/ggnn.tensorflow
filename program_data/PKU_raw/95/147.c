 int main()
 {
   char str1[80],str2[80];
   gets(str1);
   gets(str2);
   int i;
    for(i=0;i<80;i++)
     {switch(str1[i]){
      case 'A':str1[i]='a'; break;
      case 'B':str1[i]='b'; break;
      case 'C':str1[i]='c'; break;
      case 'D':str1[i]='d'; break;
      case 'E':str1[i]='e'; break;
      case 'F':str1[i]='f'; break;
      case 'G':str1[i]='g'; break;
      case 'H':str1[i]='h'; break;
      case 'I':str1[i]='i'; break;
      case 'J':str1[i]='j'; break;
      case 'K':str1[i]='k'; break;
      case 'L':str1[i]='l'; break;
      case 'M':str1[i]='m';break;
      case 'N':str1[i]='n';break;
      case 'O':str1[i]='o';break;
      case 'P':str1[i]='p';break;
      case 'Q':str1[i]='q';break;
      case 'R':str1[i]='r';break;
      case 'S':str1[i]='s';break;
      case 'T':str1[i]='t';break;
      case 'U':str1[i]='u';break;
      case 'V':str1[i]='v';break;
      case 'W':str1[i]='w';break;
      case 'X':str1[i]='x';break;
      case 'Y':str1[i]='y';break;
      case 'Z':str1[i]='z';break;
      }
    }
   int j;
    for(j=0;j<80;j++)
    {  switch(str2[j]){
      case 'A':str2[j]='a';break;
      case 'B':str2[j]='b';break;
      case 'C':str2[j]='c';break;
      case 'D':str2[j]='d';break;
      case 'E':str2[j]='e';break;
      case 'F':str2[j]='f';break;
      case 'G':str2[j]='g';break;
      case 'H':str2[j]='h';break;
      case 'I':str2[j]='i';break;
      case 'J':str2[j]='j';break;
      case 'K':str2[j]='k';break;
      case 'L':str2[j]='l';break;
      case 'M':str2[j]='m';break;
      case 'N':str2[j]='n';break;
      case 'O':str2[j]='o';break;
      case 'P':str2[j]='p';break;
      case 'Q':str2[j]='q';break;
      case 'R':str2[j]='r';break;
      case 'S':str2[j]='s';break;
      case 'T':str2[j]='t';break;
      case 'U':str2[j]='u';break;
      case 'V':str2[j]='v';break;
      case 'W':str2[j]='w';break;
      case 'X':str2[j]='x';break;
      case 'Y':str2[j]='y';break;
      case 'Z':str2[j]='z';break;
      }
     }
  if( strcmp(str1,str2)==0) printf("=\n");
  if(strcmp(str1,str2)<0 )  printf("<\n");
  if( strcmp(str1,str2)>0 )  printf(">\n");
    
  return 0;
}
  
