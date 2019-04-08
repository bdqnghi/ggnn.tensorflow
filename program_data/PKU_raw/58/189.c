int check(char a)
{   if(a-'a'>=0&&a-'z'<=0)
    return 1;
 else   if(a-'A'>=0&&a-'Z'<=0 )
    return 1;
 else   if(a-'_'==0)
    return 1;
   else 
    return 0;
}
int check1(char a)
{   if(a-'a'>=0&&a-'z'<=0)
    return 1;
 else   if(a-'A'>=0&&a-'Z'<=0 )
    return 1;
 else   if(a-'_'==0)
    return 1;
 else if(a-'0'>=0&&a-'9'<=0)   
   return 1;
   else 
    return 0;
}
int check2(char a[],int n)
{   int i,t;
    for(i=1,t=0;i<n;i++)
    if(check1(a[i])!=1)
      return 0;
    return 1;  
     
}
main()
{   int n;
    scanf("%d",&n);
    char a[200][100];
    getchar();
    int i,t;
    for(i=1;i<=n;i++)
  {  gets(a[i]);
    t= strlen(a[i]);
    if(check(a[i][0])&&check2(a[i],t))
     printf("1\n" );  
     else 
     printf("0\n");  

}          
                   
   
      
}
