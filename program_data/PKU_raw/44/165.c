int main()
{
    int a[6],b[6],m;
    int reserve(int num);
    for(m=0;m<6;m++)
    {
     scanf("%d",&a[m]);
     b[m]=reserve(a[m]);
     printf("%d\n",b[m]);
    }
     getchar();
     getchar();  
}
int reserve(int num)
{
  if(num==0)
    return(0);
  else
  {
    int c[200];
    int i,j,k,s;
    for(i=0;num!=0;i++)
    {
     c[i]=num%10;
     num=num/10;
    }
    s=0;
    for(j=0;j<i;j++)
     {
        for(k=1;k<i-j;k++)
         {
            c[j]=c[j]*10;            
         } 
        s=s+c[j];                
     }
     return(s);
  }      
}