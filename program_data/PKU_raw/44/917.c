void main()
{
  int reverse(int num);
  int a,b,i;
  for(i=0;i<6;i++)
   {
    scanf("%d",&a);
    b=reverse(a);
    printf("%d\n",b);
    }   
}

int reverse(int num)
{
    int num1,n,c1,c2,c3,c4,c5;
    if(num/10000) {c1=num/10000;c2=(num/1000)%10;c3=(num/100)%10;c4=(num/10)%10;c5=num%10; num1=c1+c2*10+c3*100+c4*1000+c5*10000;}
     else if(num/1000) {c1=num/1000;c2=(num/100)%10;c3=(num/10)%10;c4=(num%10); num1=c1+c2*10+c3*100+c4*1000;}
     else if(num/100) {c1=num/100;c2=(num/10)%10;c3=num%10; num1=c1+c2*10+c3*100;}
     else if(num/10) {c1=num/10;c2=num%10; num1=c1+c2*10;}
     else num1=num;
    return(num1);
}