void main()
{
 char a[300];
 int h,d=0;
 for(h=0;h<=299;h++)
  a[h]=0;
 gets(a);
 int b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 int i,j;
 for(i=0;i<=50;i++)
  {
   switch(a[i])
   {
    case'a':b[0]=b[0]+1;break;
    case'b':b[1]=b[1]+1;break;
    case'c':b[2]=b[2]+1;break;
    case'd':b[3]=b[3]+1;break;
    case'e':b[4]=b[4]+1;break;
    case'f':b[5]=b[5]+1;break;
    case'g':b[6]=b[6]+1;break;
    case'i':b[8]=b[8]+1;break;
    case'j':b[9]=b[9]+1;break;
    case'k':b[10]=b[10]+1;break;
    case'l':b[11]=b[11]+1;break;
    case'm':b[12]=b[12]+1;break;
    case'n':b[13]=b[13]+1;break;
    case'o':b[14]=b[14]+1;break;
    case'p':b[15]=b[15]+1;break;
    case'q':b[16]=b[16]+1;break;
    case'r':b[17]=b[17]+1;break;
    case's':b[18]=b[18]+1;break;
    case't':b[19]=b[19]+1;break;
    case'u':b[20]=b[20]+1;break;
    case'v':b[21]=b[21]+1;break;
    case'w':b[22]=b[22]+1;break;
    case'x':b[23]=b[23]+1;break;
    case'y':b[24]=b[24]+1;break;
    case'z':b[25]=b[25]+1;break;
    case'h':b[7]=b[7]+1;break;
    default:break;
   }
  }
 for(j=0;j<=25;j++)
  {
   int x;
   x=j+97;
   if(b[j]!=0)
   {printf("%c=%d\n",x,b[j]);
   d+=1;}
  }
 if(d==0)
 printf("No");
 }