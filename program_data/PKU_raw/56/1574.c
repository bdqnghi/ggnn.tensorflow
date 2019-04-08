main()
{
   int s,a,b,c,d,e,l=0;
   scanf("%d",&s);
   if(s) {l++;a=s%10;s/=10;}
   if(s) {l++;b=s%10;s/=10;}
   if(s) {l++;c=s%10;s/=10;}
   if(s) {l++;d=s%10;s/=10;}
   if(s) {l++;e=s%10;s/=10;}
   switch(l)
   {
   case 5:printf("%d%d%d%d%d",a,b,c,d,e);
	      break;
   case 4:printf("%d%d%d%d",a,b,c,d);
	      break;
   case 3:printf("%d%d%d",a,b,c);
	      break;
   case 2:printf("%d%d",a,b);
	      break;
   case 1:printf("%d",a);
	      break;
   }
 }