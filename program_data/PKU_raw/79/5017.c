int main()
{
int i,p,w,j;
int n[300]={0};
int m[300]={0};
p=0;
w=0;
do
{
	scanf("%d %d",&n[p],&m[p]);
	p++;
}
while(n[p-1]!=0);
p=p-1;
for(i=0;i<p;i++)
{
for(j=2;j<=n[i];j++)
{ 
w=(w+m[i])%j;
}
   printf ("%d\n", w+1);
   w=0;
}
return 0;
}



