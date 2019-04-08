int main()
{
    int n,s,i;
    for(i=0;i<6;i++)
   {
     scanf("%d",&n);
     if(n>0)
     s=f(n,0);
     else 
     { n=-n;
      s=-f(n,0);}
    printf("%d\n",s);
   }

 return 0;    
}

int f(int x,int y)
{
    y=y*10+x%10;
    if(x<10)
    return y;
    else
    f(x/10,y);
}

