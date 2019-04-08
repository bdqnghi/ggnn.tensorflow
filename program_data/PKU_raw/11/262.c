void main()
{
   int i;
   long a[5];
   int b[5],c[5],g[5];
   i=1;
   while(i<=5)
  {
   scanf("%ld %d %d",&a[i],&b[i],&c[i]);
   i++;
   }
   i=1;
   while(i<=5)
  {
   g[i]=0;
   switch(b[i])
	{
	case 12: g[i]+=30;
	case 11: g[i]+=31;
	case 10: g[i]+=30;
	case 9: g[i]+=31;
	case 8: g[i]+=31;
	case 7: g[i]+=30;
	case 6: g[i]+=31;
	case 5: g[i]+=30;
	case 4: g[i]+=31;
	case 3: g[i]+=28;
	case 2: g[i]+=31;
	case 1: g[i]+=0;break;
	default: printf("error\n");
	}
   if(((a[i]%4==0&&a[i]%100!=0)||(a[i]%400==0))&&(b[i]>=3))
       c[i]=c[i]+1;
   printf("%d\n",g[i]+c[i]);
   i++;
  }
}