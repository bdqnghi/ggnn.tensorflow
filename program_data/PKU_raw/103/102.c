main ()
{
    char a[1000];
scanf("%s",a);
  int i,j;
   for(i=0;a[i]!='\0';)
              {    int kk=i;
                    int ws;
                     for(ws=i;a[ws]!='\0';ws++)
                           if(a[ws]!=a[ws+1]&&a[ws]!=a[ws+1]+32&&a[ws]!=a[ws+1]-32)
                           break;
                           
                           
                           
                           
                           
                           
                       
                    
                       if(kk<ws)
                       {
                              if(a[ws]>=97)
                          a[ws]=a[ws]-32; 
                          
                          printf("(%c,%d)",a[ws],ws-kk+1);
                          i=ws+1;     
                                }
                       else{
                            
                            
                              if(a[ws]>=97)
                          a[ws]=a[ws]-32; 
                        printf("(%c,1)",a[ws]);
                           i++;}

}

getchar ();
getchar ();
}
