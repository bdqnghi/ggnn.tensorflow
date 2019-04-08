void turn(char *a,int n)
{
     char *p,*q;
     int i,j,t,k;
     k=n/2+n%2;
     p=a,q=a+n-1;
     for(i=0;i<=k-1;i++)
     {
                              t=*(p+i);
                              *(p+i)=*(q-i);
                              *(q-i)=t;
     }
}
main()
{
int ii;
for(ii=0;ii<=5;ii++) 
{
     char A[100];
     int i,j,count=0;
     memset(A,'\0',100);
     scanf("%s",A);
     
     if(A[0]=='-')
     {for(j=0;A[j]!='\0';j++)
      {A[j]=A[j+1];}
      printf("-");
     }
     {  
     for(i=0;A[i]!='\0';i++)
     {count++;}
     turn(A,count);
     if(A[0]=='0'&&A[1]=='\0'){printf("0");} 
     else{
              for(i=0;A[0]=='0';i++) 
              {
                           for(j=0;A[j]!='\0';j++)
                           {
                                                  A[j]=A[j+1];
                           }
              }
              for(i=0;A[i]!='\0';i++) 
              {
                          printf("%c",A[i]);
              }
         }
     }
     

     
         
     printf("\n");
}

     
}
