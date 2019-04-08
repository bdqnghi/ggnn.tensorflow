
main()
{
int n,s,c,k,i,y,t,l;
int reverse(int num);
int a[8];
for(i=0;i<6;i++)
{
scanf("%d",&n);
//if(n==0) {printf("0");}
l=reverse(n);
printf("%d\n",l);
}
getchar();
getchar();
getchar();
getchar();
}
int reverse(int num)
{
    int n,s,c,k,i,y,t,l;
    int a[8];
   s=num;
  c=1;k=1;t=0;y=0;
 for(int i=0;s!=0;i++)
 {
         s=s/10;
         c=c*10;
         a[i]=(num-s*c)/k;
         k=k*10;
       //printf("%d %d\n",a[i],i);  
          t=10*y;
        y=t+a[i];             
 
//printf("%d\n",y);

}
//printf("%d\n",y);
  num=y;
  return(num);
}

