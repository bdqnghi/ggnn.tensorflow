
main()
{
 int n,i,j,k,s[200][2],a=0,b=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    scanf("%d %d",&s[i][0],&s[i][1]);
    if(s[i][0]==0)
    {
       if(s[i][1]==1)
       a++;
       else
       {
          if(s[i][1]==2)
          b++;
          else;
       }
    }
    
     if(s[i][0]==1)
    {
       if(s[i][1]==2)
       a++;
       else
       {
          if(s[i][1]==0)
          b++;
          else;
       }
    }
    
     if(s[i][0]==2)
    {
       if(s[i][1]==0)
       a++;
       else
       {
          if(s[i][1]==1)
          b++;
          else;
       }
    }
    
    
 }
 if(a>b)
    printf("A");
    else
    {
       if(a<b)
       printf("B");
       else
       printf("Tie");
    }
}
