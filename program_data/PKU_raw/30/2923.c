
void main()
{
int n,i,s=0,a;
scanf("%d",&n);
for(i=1;i<=n;i++)
 {if(i%7!=0)
     if(i%10!=7)
         if(i/10%10!=7) s=s+i*i;
 }
printf("%d",s);
}

