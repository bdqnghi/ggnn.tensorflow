
int main()
{
  int i,k=0,j,t,p=0;
	char a[501];
   gets(a);
   for(i=0;a[i]!='\0';i++)
	   k++;
   for(i=2;i<=k;i++)
	  { for(j=1;j+i-1<=k;j++)
		  { p=0;
			  for(t=j;t<=j+i-1;t++)
		   { if(a[t-1]!=a[j+j+i-t-2]) p=1; }
		   if(p==0)
		   { for(t=j;t<=j+i-1;t++) printf("%c",a[t-1]);printf("\n");}
          }
      }
   
   return 0;

              




}
		






