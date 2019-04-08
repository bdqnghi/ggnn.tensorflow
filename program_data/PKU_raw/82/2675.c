int main( )
{
          int i,n,s[200],j=0,k=0;
          scanf("%d\n",&n);
          for(i=0;i<2*n;i+=2)
          {
           scanf("%d %d",&s[i],&s[i+1]);
          }
          for(i=0;i<2*n;i+=2)
              {
    	if(s[i]>=90&&s[i]<=140&&s[i+1]>=60&&s[i+1]<=90)
                  j++;
                  else 
                  j=0;
                  if(k<=j)
                  k=j;
              }
         printf("%d",k);

    return 0;
}

