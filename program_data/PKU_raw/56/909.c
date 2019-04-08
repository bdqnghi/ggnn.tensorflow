int main()
{int a,b,i,y,x;
 char c,am[10]={0},bm[10]={0};
 for(i=0;;i++)
 {c=getchar();if(c=='\n')break;
 if(c!='\n')am[i]=c;}
 for(x=0;x<i;x++)
 {bm[x]=am[i-1-x];}
 for(x=0;x<i;x++)printf("%c",bm[x]);
 
 
 


return 0;


}