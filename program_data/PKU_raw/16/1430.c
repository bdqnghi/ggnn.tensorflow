int main()
{
 int num;
 scanf("%d",&num);
 if(num==10000)
 printf("00001\n");
 else
 if(num>999)
 printf("%d%d%d%d\n",num%10,num%100/10,num/100%10,num/1000%10);
 else
 if(num>99)
 printf("%d%d%d\n",num%10,num%100/10,num/100%10);
 else
 if(num>9)
 printf("%d%d\n",num%10,num%100/10);
 else
 printf("%d\n",num);
 return 0;
}