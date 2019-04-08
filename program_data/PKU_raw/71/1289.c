int main()
{
int n,i,y,a,b,j,p,f,e;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d%d",&y,&a,&b);
if(a>b)
{
	e=a;
	a=b;
	b=e;
}
if((y%4==0&&y%100!=0)||(y%400==0))
{
p=0;
f=0;
for(j=a;j<b;j++)
{
if(j==1) p=p+31;
if(j==2) p=p+29;
if(j==3) p=p+31;
if(j==4) p=p+30;
if(j==5) p=p+31;
if(j==6) p=p+30;
if(j==7) p=p+31;
if(j==8) p=p+31;
if(j==9) p=p+30;
if(j==10) p=p+31;
if(j==11) p=p+30;
}
if(p%7==0) {printf("YES\n");f=1;}
}

else
{
p=0;
f=0;
for(j=a;j<b;j++)
{
if(j==1) p=p+31;
if(j==2) p=p+28;
if(j==3) p=p+31;
if(j==4) p=p+30;
if(j==5) p=p+31;
if(j==6) p=p+30;
if(j==7) p=p+31;
if(j==8) p=p+31;
if(j==9) p=p+30;
if(j==10) p=p+31;
if(j==11) p=p+30;
}
if(p%7==0) {printf("YES\n");f=1;}
}

if(f==0) printf("NO\n");
}
return 0;
}