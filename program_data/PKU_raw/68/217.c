int fflag(int n);
int main()
{
int i,n;
int t;
scanf("%d",&t);
for(i=6;i<=t;i+=2)
{
for(n=2;n<i;n++) 
if(fflag(n)) 
if(fflag(i-n))
{
printf("%d=%d+%d\n",i,n,i-n); 
break;
}
if(n==i) printf("error %d\n",i);
}
}

int fflag(int i) 
{
int j;
if(i<=1)return 0;
if(i==2)return 1;
if(!(i%2))return 0; 
for(j=3;j<=(int)(sqrt((double)i)+1);j+=2)
if(!(i%j))return 0;
return 1; 
} 