int main(){
   int a,n,i;
   char *b,x[1000][300],y[1000][300];
   scanf("%d",&n);
   for(a=0;a<n;a++)
   {  scanf("%s",x[a]);
      	
       for(b=x[a],i=0;*b!='\0';b++,i++)
       {  
          if(*b=='A')
           y[a][i]='T';
          if(*b=='G')
           y[a][i]='C';
          if(*b=='C')
           y[a][i]='G';
          if(*b=='T')
           y[a][i]='A';
        }
    printf("%s\n",y[a]);
	}
	  return 0;
    
}