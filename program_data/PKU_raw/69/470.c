int f(char x)
{
    int xx=x-'0';
	return xx;
}
int num1(int x,int y)
{
    if((x+y)>9)
      return x+y-10;
    else return x+y;
}
int num10(int x,int y)
{
    if((x+y)>9)
       return 1;
    else return 0;
}
int max(int x,int y)
{
    if(x>y)return x;
    else return y;
}
int main()
{
    char a[251],b[251],c[251];
    scanf("%s",a);
    scanf("%s",b);
    int la=strlen(a),lb=strlen(b);
    int mx=max(la,lb);
    int i,j,k,p=0;
    for(i=la-1,j=lb-1,k=0;k<mx;i--,j--,k++)
    {
       if(i>=0&&j>=0)
       {
         c[k]=num1(f(a[i]),f(b[j])+p);
         p=num10(f(a[i]),f(b[j])+p);
       }
       else if(i>=0&&j<0)
       {
         c[k]=num1(f(a[i]),p);
         p=num10(f(a[i]),p);
       }
       else 
       {
         c[k]=num1(f(b[j]),p);
         p=num10(f(b[j]),p);
       }
    }
    int frag=0;
    if(p==0)
      for(i=mx-1;i>=0;i--)
      {
         if(c[i]>0)frag=1;
         if(frag==1)
         printf("%d",c[i]);
         else if(i==0)printf("0");
      }
    else 
    {
         c[mx]=1;
         for(i=mx;i>=0;i--)printf("%d",c[i]);
    }
    
    return 0;
}     