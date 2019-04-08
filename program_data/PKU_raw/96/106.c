
main()
{
      char a[100]={0},q[100]={0};
      int r;
      int b[100];
      int i,j,k,l=0;
      

                     for(k=0;k<100;k++)
                     {
                     b[k]=0;
                     a[k]=0;
                     q[k]=0;
                     }

                     scanf("%s",a); 
                     for(j=0;;j++)
                     if (a[j]=='\0') break;
                     l=j;
                     
                     b[0]=a[0]-'0';
                     for(j=0;j<l;j++)
                     {
                                          for (k=0;;k++)
                                          {
                                          if ((13*k)<=b[j] && (13*k+13)>b[j])
                                              {
                                                             q[j]=k+'0';
                                                             b[j]=b[j]-13*k;
                                                             goto label;
                                              }
                                          }
                                          label:
                                          b[j+1]=10*b[j]+a[j+1]-'0';
                     }
                     r=b[j-1];
                     
                     if (q[0]=='0' && q[1]=='\0') printf("0\n");
                     if (q[0]=='0' && q[1]=='0' && q[2]=='\0') printf("0\n");
                     if (q[0]=='0' && q[1]=='0' && q[2]!='\0') 
                     {
                                   j=2;
                                   while(q[j]!='\0') 
                                   {
                                                     printf("%c",q[j]);
                                                     j++;
                                   }
                                   printf("\n");
                     }
                     if (q[0]=='0' && q[1]!='0' && q[1]!='\0') 
                     {
                                   j=1;
                                   while(q[j]!='\0') 
                                   {
                                                     printf("%c",q[j]);
                                                     j++;
                                   }
                                   printf("\n");
                     }
                     if(q[0]!='0')
                     {
                                   j=0;
                                   while(q[j]!='\0')
                                    {
                                                     printf("%c",q[j]);
                                                     j++;
                                   }
                                   printf("\n");
                     }
                     
                     printf("%d\n",r);                     
      
}