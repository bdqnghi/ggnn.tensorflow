char fy(char x)
   {
     char z;
     switch(x)
     {
           case'T':z='A';break;
           case'A':z='T';break;
           case'G':z='C';break;
           case'C':z='G';break;
           default:z='\0';
     }
     return z;
   }
int main(int argc, char *argv[])
{
  char c;
  char a[255]={'\0'};
  int i,n,j,k;
  scanf("%d\n",&n);
  for(j=1;j<=n;j++)
  {
  for(i=0;i<255;i++)
  a[i]='\0';
  scanf("%s",a);
  for(i=254;i>=0;i--)
     {
         if(a[i]!='\0')
         {k=i;
          break;}
     }
  for(i=0;i<k;i++)
     {c=fy(a[i]);
      printf("%c",c);
      }
     c=fy(a[k]);
     printf("%c\n",c);
  }	
  return 0;
}