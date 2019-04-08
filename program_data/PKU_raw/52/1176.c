void main()
{void move(int [20],int,int);
int num[20],n,m,i;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
scanf("%d",&num[i]);
move(num,n,m);
for(i=0;i<n;i++)
printf("%d%c",num[i],(i<n-1)?' ':'\n');
}
void move(int a[20],int n,int m)
{int *p,end;
end=*(a+n-1);
for(p=a+n-1;p>a;p--)
*p=*(p-1);
*a=end;
m--;
if(m>0)move(a,n,m);
}