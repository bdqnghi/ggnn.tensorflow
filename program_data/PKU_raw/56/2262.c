
int main()
{
  int n,i,j,k,a,b;
  scanf("%d",&n);
  for(i=1;i<6;i++)
  {
                  b=pow(10,i);
                  a=(n%b)/pow(10,i-1); 
                  
                 if(a==0)
                 {break;}
                 printf("%d",a);
  }

  scanf("%d",&k); 
}

