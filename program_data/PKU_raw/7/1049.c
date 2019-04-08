main()
{
  int i,j=0,t,s,n=0,k,l;
  char c1[256],c2[256],c3[256];
  gets(c1);
  gets(c2);
  gets(c3);
  s=strlen(c2);    
  for(i=0;c1[i]!='\0';i++)
  {
    if(c1[i]==c2[j])
    {
     n++;
     j++;                
    }
    else{j=0;n=0;}
    if(n==s){t=i;break;}
    //printf("%d",i);                        
  }    
  //printf("%d",n);
  if(n==s)
 { for(l=0,k=t-s+1;k<=t,l<s;l++,k++)
  {
    c1[k]=c3[l];                                 
  } }
  
 printf("%s",c1);    
getchar();
getchar();
 getchar();     
}
