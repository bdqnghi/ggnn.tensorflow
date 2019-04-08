main()
{
char s[100000];
int t0,t;
scanf("%d",&t);
for(t0=1;t0<=t;t0++)
{
  int i,j1,j2,k,m=0;
  scanf("%s",s);
  k=strlen(s);
  int a[k];
  memset(a,0,4*k);
  for(j1=0;j1<k;j1++)
      {         
        for(j2=0;j2<k;j2++)
          {  
            if(s[j2]==s[j1])   a[j1]++;   
          } 
      }

  for(i=0;i<k;i++)
      {
        if(a[i]==1) 
          {  m++;  break;  }   
      }
      
  if(m==0)  printf("no\n"); 
  else      printf("%c\n",s[i]); 
}     
}
