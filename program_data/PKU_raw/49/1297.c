int main ()
{
    char s[501],t[501];
    int i,j,l,c,d,temp=0,m,n=0;
    scanf("%s",s);
    l=strlen(s);
    for (i=1;i<=l;i++)
    {
        for (j=0;j<l-i;j++)
        {
            d=j+i;
            c=j;
            while (c<d)
            {
                  if(s[c]==s[d])
                  {
                                c++;d--;
                  } 
                  else 
                  {
                       temp=1;
                       break;
                  }  
                                 
            }
            if (temp==0)
            {
                  for (m=j;m<=j+i;m++)
                   {
                        t[n]=s[m];
                        t[n+1]='\0';
                        n++;
                   }
                    printf("%s\n",t); 
                    n=0;                              
             }           temp=0; 
        }
    }
        return 0;     
} 