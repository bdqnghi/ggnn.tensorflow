int main()
{
int n;
scanf("%d",&n);
int i;
for(i=0;i<n;i++)          
{
        int a,b,c,d;
        d=0;
 scanf("%d %d %d",&a,&b,&c);   
 if((a%400==0)||(a%100!=0&&a%4==0))
 d=1;
 int A[12];
 A[0]=31;A[1]=28;A[2]=31;A[3]=30;A[4]=31;A[5]=30;A[6]=31;A[7]=31;A[8]=30;A[9]=31;A[10]=30;A[11]=31;
  int e;
 if(b>c)
 {int t;t=b;b=c;c=t;}
 e=c-b;
 int f=0;
 int j;
 if(d==1)
 A[1]=29;
 for(j=0;j<e;j++)
   {
     f=f+A[b+j-1];     
   }
   if(f%7==0)
   printf("YES\n");
   else
   printf("NO\n");
}
return(0);
}
