
int main()
{
    int a,b,c,d,e,f,x,y,z,m;
    while(1)
   {

   scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
   if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0)&&(f==0))
   break;
   d=d+12;
   if(f<c)
   {
        f=f+60;
        e=e-1;
   }
   z=f-c;
   if(e<b)
   {
       e=e+60;
       d=d-1;
   }
   y=e-b;
   x=d-a;
   m=x*3600+y*60+z;
   printf("%d\n",m);

}
return 0;
}
