
int main()
{
  int m;
  scanf("%d",&m);
  int a,i;
  for(a=3;a<=(m/2);a=a+2)
  {
      int c=0;
      for(i=2;i<a;i++)
      if(a%i==0)
      c++; 
      int d=0;
      for(i=2;i<m-a;i++)
      if((m-a)%i==0)
      d++; 
     
     
     if(c==0&&d==0)
    printf("%d %d\n",a,m-a);  
  }
  getchar();
  getchar(); 
}