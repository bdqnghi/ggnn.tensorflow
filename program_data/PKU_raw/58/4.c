
int main()
{
    int n,i,j,k,s;
    int l;
    char a[1000][100];
   scanf("%d",&n);
   getchar();
  for(i=0;i<n;i++)
  {
      gets(a[i]);           
  }
       
       for(i=0;i<n;i++)
       {
           s=strlen(a[i]);
            for(j=0;j<s;j++)
              {
                            k=a[i][j];
               //  if(a[i][j]!=' '&&a[i][j]!='.')
               //  l=0;
               //  else
              //   {
              //   l=1;
              //   break;
              //   }
                 if(k<123&&k>96)
                 l=0;
                 else if(k<91&&k>64)
                 l=0;
                 else if(a[i][j]=='_')
                 l=0;
                 else if(k<58&&k>47)
                 l=0;
                 else
                 {
                 l=1;
                 break;
                 }
              }
           if(l==0&&a[i][0]!='0'&&a[i][0]!='1'&&a[i][0]!='2'&&a[i][0]!='3'&&a[i][0]!='4'&&a[i][0]!='5'&&a[i][0]!='6'&&a[i][0]!='7'&&a[i][0]!='8'&&a[i][0]!='9')                
           printf("1\n");
           else
           printf("0\n");
       }            

              
  
     
    getchar();
    getchar();
    
}
