// asdddee.cpp : Defines the entry point for the console application.
//




int main()
{ char zifu[100];
   char a[10];
   int n,p,i,j,l;
      gets(a);
       n=atoi(a); 
        for(i=0;i<n;i++){
             gets(zifu);
                 if(zifu[0]=='_'||(zifu[0]>='A'&&zifu[0]<='Z')||(zifu[0]>='a'&&zifu[0]<='z'))
				 {   l=1;
				         p=1;
                               for(j=1;zifu[j]!='\0';j++){
                                      if((zifu[j]>='A'&&zifu[j]<='Z')||(zifu[j]>='a'&&zifu[j]<='z')||(zifu[j]>='0'&&zifu[j]<='9')||zifu[j]=='_') 
                                          p=1;
                                             else{
                                                p=0;
                                                    break;}                  
                                                        } 
                                                                   
                               }
                 else 
					 l=0;
				 if(l==0)
                      printf("0\n");
                            else if(p==1&&l==1)
                                          printf("1\n");
							                   else if(p==0)
												   printf("0\n");
                        }
  

  	
  return 0;
}
