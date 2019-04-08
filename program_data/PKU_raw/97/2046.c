int main()
{
int sum;
scanf("%d",&sum);
printf("%d\n",sum/100);
sum=sum-sum/100*100;
if(sum>=50)
{
printf("1\n");
sum=sum-50;
}
else
printf("0\n");
printf("%d\n",sum/20);
sum=sum-sum/20*20;
printf("%d\n",sum/10);
sum=sum-sum/10*10;
printf("%d\n",sum/5);
sum=sum-sum/5*5;
printf("%d\n",sum);
return 0;
}