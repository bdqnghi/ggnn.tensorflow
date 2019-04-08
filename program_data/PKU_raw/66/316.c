int main()
{  int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
  switch (a){
   case 4:
   printf("Mon.");
   break;
   case 2000:
   printf("Tue.");
   break;
   case 1921:
   printf("Fri.");
   break;
   default:
   printf("Sat.");
   break;
  }
   return 0;
}