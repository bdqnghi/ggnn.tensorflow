void main()
{
int l,r;
scanf("%d",&r);
for(l=1;l<=r;l++)
{	int max(int,int);
char d[102]={0},e[102]={0},f[102]={0};
signed char a[102]={0},b[102]={0},c[103]={0},t;                   /*???*/
int m,p=0,i,j,k,x,y,z=0,signa=1,signb=-1;                 /*??*/
//printf("input a number:\n");
scanf("%s",d);
for(i=0;i<102;i++)                            
{
a[i]=d[i];
}
if(a[0]=='-')
{
signa=-1;
for(i=0;i<101;i++)
a[i]=a[i+1];
}
for(i=0;a[i]!=0;i++);
x=i-1;
for(j=0;j<x;j++,x--)
{
t=a[j];
a[j]=a[x];
a[x]=t;
}                                                               /*?????*/
x=i-1;
for(k=0;k<=x;k++)a[k]-='0';                      /*?????????????*/
//?b????
//printf("input another number:\n");
scanf("%s",e);
for(i=0;i<102;i++)                            
{
b[i]=e[i];
}
if(b[0]=='-')
{
signb=-1;
for(i=0;i<101;i++)
b[i]=b[i+1];
}
for(i=0;b[i]!=0;i++);
y=i-1;
for(j=0;j<y;j++,y--)
{
t=b[j];
b[j]=b[y];
b[y]=t;
}                                                               /*?????*/
y=i-1;
for(k=0;k<=y;k++)b[k]-='0';                      /*?????????????*/
//?????????????????????????????????????????
//?????????????????fab(a)?fab(b)<?=?>
if(signa==signb)
{
for(i=0;i<=x||i<=y;i++)
{
c[i]=a[i]+b[i]+p;
p=0;
if(c[i]>9)
{
p=1;
c[i]-=10;
}
}
if(p==1){c[i]=1;i++;}
for(k=0;k<i;k++) /*???????????????????????????????*/
c[k]+='0';
for(k=0;k<i-1;k++,i--)
{
t=c[k];
c[k]=c[i-1];
c[i-1]=t;
}
if(signa==-1)printf("-");
for(i=0;i<102;i++)                            
{
f[i]=c[i];
}
puts(f);
}
else
{
for(m=max(x,y);(m>=0)&&(z==0);m--)
{
if(a[m]>b[m])z=1;
else {if(a[m]<b[m])z=-1;
else z=0;}
}
if(!z)printf("0");
else
{
if(z==-1)for(i=0;i<102;i++)                                /*for?????????*/
{
t=a[i];
a[i]=b[i];
b[i]=t;
}
for(i=0;i<=max(x,y);i++)
{
c[i]=a[i]-b[i]+p;
p=0;
if(c[i]<0)
{
p=-1;
c[i]+=10;
}
}
for(i-=1;c[i]==0;i--);
for(k=0;k<=i;k++)c[k]+='0';
for(k=0;k<i;k++,i--)
{
t=c[k];
c[k]=c[i];
c[i]=t;
}
if(z*signa!=1)printf("-");
for(i=0;i<102;i++)                            
{
f[i]=c[i];
}
puts(f);
}
}
}
}
int max(int x ,int y)
{
return(x>y?x:y);
}/*????*/
