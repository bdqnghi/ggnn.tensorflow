int n,k;
int fen(int m)
{
int fen(int m);
int i=0;
for(i=0;i<n;i++)
{if(((m-k)%n==0)&&((m-k)/n!=0))
{
 m=m-k-(m-k)/n;
 fen(m);
}
else {i=0;return(0);}
}
if(i==n)return(1);
}

void main()
{
int fen(int m);
int m=1;
scanf("%d%d",&n,&k);
for (m=1;;m++)
if(fen(m)==1)break;
printf("%d",m);
}