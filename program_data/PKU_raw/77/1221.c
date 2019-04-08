int main()
{ char w;
  char a[105];
  int i,j=1,k,m=0,t;
  int b[100],c[100];
 for(k=0;k<105;k++)
    { 
     w=getchar();
      if(w!='\n')
        {a[k]=w;} 
      if(w=='\n')
       {break;}
     }
  while(j<=k)
  {     
   for(i=0;i<k;i++)
      { 
        if((a[i]=='{'||a[i]=='('||a[i]=='['||a[i]=='<')&&(a[i+j]=='}'||a[i+j]==')'||a[i+j]==']'||a[i+j]=='>'))
         {
          b[m]=i;c[m]=i+j;m++;
           a[i]='\0';
           a[i+j]='\0';
         }
      }
    j=j+2;
   }
  for(i=0;i<m-2;i++)
     for(j=0;j<m-2-i;j++)
       if(c[j]>c[j+1]){t=c[j];c[j]=c[j+1];c[j+1]=t;t=b[j];b[j]=b[j+1];b[j+1]=t;}
   for(i=0;i<k/2;i++)
    cout<<b[i]<<' '<<c[i]<<endl;

 return 0;
}