void main()
{
 int n,num[300],temp,flag=0,*p,*q;
 scanf("%d",&n);
 scanf("%d",&num[0]);
 for(p=num+1;p<(num+n);p++)
 {
  scanf("%d",&temp);
  for(q=num;q<p;q++)
  {
   if(temp==*q)
   {
    flag = 1;
    break;
   }
  }
  if(flag==1)
  {
   p--;
   n--;
  }
  else *p=temp;
  flag = 0;
 }
 printf("%d",*num);
 for(p=num+1;p<(num+n);p++)
     printf(",%d",*p);
} 
