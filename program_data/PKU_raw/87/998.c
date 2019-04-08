
int main()
{
 int a1,b1,c1,a2,b2,c2,i;
 int result=0;
 for(i=0;;i++)
 {
 scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
 if(a1==0&&b1==0&&c1==0&&a2==0&&b2==0&&c2==0)
 {
   break;
  }
  else{
   result+=(a2+12-a1)*3600;
   result+=b2*60+c2;
   result=result-b1*60-c1;
   printf("%d\n",result);
   result=0;
  }
}
  return 0;
}
