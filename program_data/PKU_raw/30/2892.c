

int main()
{
 int n;
 int result=0;
 int sum1=0,sum2;
 scanf("%d",&n);
for(int i = 0;i <= n;i++){if(i%7 == 0){result += i*i;}
  else if(i%10 == 7){result += i*i;}
  else if(i%100 == 71 || i%100 == 72 || i%100 == 73 || i%100 == 74 || i%100 == 75 || i%100 == 76 || i%100 ==78 || i%100 == 79){result += i*i;}
}
for(int e = 0;e <= n;e++){scanf("%d",&e);sum1 += e*e;}
   sum2 = sum1 - result;
   printf("%d",sum2);
return 0;
}

