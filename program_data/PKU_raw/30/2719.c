int main()
{
  int n,s=0,i=1;
  scanf("%d",&n);
  for  (i=1;i<=n;i++)
   { if (i%7==0)
      continue;
    else if ((i-7)%10==0)
      continue;
    else if (i==71)
      continue;
    else if (i==72)
      continue;
    else if (i==73)
      continue;
    else if (i==74)
      continue;
    else if (i==75)
      continue;
    else if (i==76)
      continue;
    else if (i==77)
      continue;
    else if (i==78)
      continue;
    else if (i==79)
      continue;
    else s=s+i*i;
   }
   printf("%d\n",s);
   return 0;
}
