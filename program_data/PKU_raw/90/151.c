void main()
{long int f1(long int x,long int y);
long int f2(long int x,long int y);
long int n,a[20],b[20],i,k[20];
scanf("%ld",&n);
for(i=0;i<n;i++)
scanf("%ld %ld",&a[i],&b[i]);
for(i=0;i<n;i++)
{if(b[i]==1) k[i]=1;
else k[i]=f1(a[i],b[i])+f2(a[i],b[i]);
printf("%ld\n",k[i]);}
}

long int f1(long int x,long int y)
{long int z;
if(y>2) z=f1(x,y-1)+f2(x,y-1);
else if(y==2) z=1;
return(z);}

long int f2(long int x,long int y)
{long int w;
if(x-y>=0) w=f1(x-y,y)+f2(x-y,y);
else w=0;
return(w);}