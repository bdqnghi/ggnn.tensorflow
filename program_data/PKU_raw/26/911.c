
int main(){
   int i,j,m,n;
    j=0;
    m=0;
  char x[100],*a,y[100];
   gets(x);
  for(a=x;*a!='\0';a++)
     { 
        if(*a!=' ');
           {y[j]=*a;
              j++;}
            
         if(*a==' ')
           {
        
            while(*a==' ')
             {a++; }
             a--;
	        }
              
        }
      y[j]='\0';
    printf("%s",y);

      return 0;

    }