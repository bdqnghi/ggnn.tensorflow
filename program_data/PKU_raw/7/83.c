int main()
{

   


        char a[256];
    char b[256];
    char c[256];
    int i,n,m,d=0;
int e=0;
       
    gets(a);
    gets(b);
    gets(c);
    
    n=strlen(a);
    for(i=0;i<n;i++){
                  if (a[i]==b[0]){
                                if (a[i+1]==b[1]){
                                                   if (a[i+2]==b[2]){
                                                         d=i;
                                break;}}}
                                          
                     }
    

        m=strlen(c);
      if (d!=0) {
           
             for (i=d;i<d+m;i++){
                   
                a[i]=c[e];
                  e++;

                  }

           


}
      puts(a);

return 0;
}