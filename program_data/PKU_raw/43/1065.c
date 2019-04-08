int main()
{
 int m,n,a,b,i1,i2,i3,flag;
 scanf("%d",&a);
 b=a/2;
 for(i1=3;i1<=b;i1=i1+2)
 {
  m=i1;
  n=a-i1;
  flag=0;
  for(i2=2;i2<m;i2++)
  {  
   if(m%i2==0){ flag=flag+1;break;}
  }
  for(i3=2;i3<n;i3++)
  {  
   if(n%i3==0){ flag=flag+1;break;}
  }
  if(flag==0) printf("%d %d\n",m,n);
  }
 return 0;
}

 
 