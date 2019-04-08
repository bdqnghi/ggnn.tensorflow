int zhi(int i)
{
    int j,d;
    d=1;
    for(j=1;j<=i/2; j++)  
    {
      if(i%j==0) d=j;
    }
    return (d);
}
int main()
{
    int m,i,j;
    int d=1;
    scanf("%d",&m);
    for(i=3; i<=m/2;i=i+2)  
    {
      j=m-i;
      if (zhi(i) == 1 && zhi(j) == 1) 
	  printf("%d %d\n",i,j);
    }
}
