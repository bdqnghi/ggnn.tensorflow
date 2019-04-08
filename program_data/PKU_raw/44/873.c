int main()
{
    int reverse(int num);
    
    int a[6],b[6],i;
    for(i=0;i<6;i++)
     {scanf("%d",&a[i]);
    b[i] = reverse(a[i]);}
    for(i=0;i<6;i++)
    printf("%d\n",b[i]);
    getchar();
    getchar();
}
int reverse(int num) 
{
  int a[100],i,j,z=0,b=1;
    for(i=0;;i++)
     {a[i]=num%10;
      num=num/10;
      if(num==0)
      break;}
      for(j=i;j>=0;j--)
      {z= z+a[j]*b ;
       b=b*10;
       }
    return(z);
}  