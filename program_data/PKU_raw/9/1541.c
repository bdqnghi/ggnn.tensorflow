struct node
{
char s[100];
int age,no;
}a[1000],b;
int check(int x,int y)
{
if(a[y].age<60 && a[x].age>=60) return 0;
if(a[y].age>=60 && a[x].age<60) return 1;
if(a[x].age<60 && a[y].age<60 && a[x].no>a[y].no) return 1;
if(a[x].age<60 && a[y].age<60 && a[x].no<a[y].no) return 0;
if(a[x].age>a[y].age) return 0;
if(a[x].age<a[y].age) return 1;
if(a[x].no<a[y].no) return 0;
if(a[x].no>a[y].no) return 1;
return 0;
}
int main()
{
int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%s %d",&a[i].s,&a[i].age);
a[i].no=i;
}
for(i=1;i<n;i++)
 for(j=i+1;j<=n;j++)
  if(check(i,j)==1){b=a[i];a[i]=a[j];a[j]=b;}
for(i=1;i<=n;i++)
printf("%s\n",a[i].s);
return 0;
}