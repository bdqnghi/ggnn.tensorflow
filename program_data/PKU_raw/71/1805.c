int main()
{
   int n,i,a,b,c;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d %d %d", &a, &b, &c);
   if((a%400==0) ||(a%4 ==0 && a%100!=0)){
   if((b==1 || b==4 || b==7) && (c==1 || c==4 ||c==7))
   {printf("YES\n");}
   else if ((b==9 || b==12) && (c==9 || c==12)){
   printf("YES\n");}
   else if ((b==2 || b==8) && (c==2 || c==8))
   {printf("YES\n");}
   else if ((b==3 || b==11) && (c==3 || c==11))
   {printf("YES\n");}
   else {printf("NO\n");}
   } 
   else{
   if ((b==2 || b==3 || b==11 )&& (c==2 || c==3||c==11))
   {printf("YES\n");}
   else if ((b==1 || b==10) && (c==1 || c==10))
   {printf("YES\n");}
   else if ((b==4 || b==7) && (c==4 || c==7))
   {printf("YES\n");}
   else if ((b==9 || b==12) && (c==9 || c==12))
   {printf("YES\n");}
   else {printf("NO\n");}
   } }
   return 0;
}