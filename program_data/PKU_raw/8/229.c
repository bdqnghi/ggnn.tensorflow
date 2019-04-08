int m,n;
int a[100],b[100];
void main()
{
	void f1();
	void f2(int s[],int k);
	void f3(int p[],int t);
         void f4(int p[],int t);
	f1();
f2(a,m);
f2(b,n);
f3(a,m);
f4(b,n);

}
 
void f1()
{int i;
scanf("%d %d",&m,&n);
for (i=0;i<m;i++)
  scanf("%d",&a[i]);
for (i=0;i<n;i++)
  scanf("%d",&b[i]);

}

void f2(int s[],int k)
{

int i,j,t;
for (j=0;j<k-1;j++)
  for (i=0;i<k-1-j;i++)
	  if(s[i]>s[i+1])
	  {t=s[i];
	  s[i]=s[i+1];
	  s[i+1]=t;}

}

void f3(int p[],int t)
{
int i,j;
for (i=0;i<t;i++)
 printf("%d ",p[i]);
}

void f4(int p[],int t)
{
int i,j;
for (i=0;i<t-1;i++)
  printf("%d ",p[i]);
printf("%d",p[t-1]);
 


}