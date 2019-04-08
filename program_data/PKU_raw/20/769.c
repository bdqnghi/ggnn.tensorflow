int main()
{
    
    char a[20],b[4];
    while (cin>>a>>b)
    {
          char *pa,*pb=b,*pmax=a; 
          for (pa=a; pa!=&a[strlen(a)]; pa++)  
              if (*pa>*pmax) pmax=pa;   //??ASCII????????pmax?????? 
          for (pa=&a[strlen(a)]; pa!=pmax; pa--)  //?pmax??????????? ?b???? 
              *(pa+3)=*pa;
          for (pa=pmax+1,pb=b;pb!=&b[3];pa++,pb++)  //?b???pmax??????? 
              *pa=*pb;
          pa=a;
          cout<<pa<<endl;
    }
    

return 0;
}
