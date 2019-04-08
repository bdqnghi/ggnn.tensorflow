int p(int k)
{int i,a,c;
	for(i=2;i<k;i++)
	{ a=k%i;
	if(a==0)
	{	c=1;
	break;}
	}
	if(c!=1)
		c=0;
	return(c);}
int q(int x)
{ 
 int n=1,y=0,m,w; 
    m=x; 
    while(x!=0) 
 { 
    x/=10; 
    n*=10; 
 } 
    n/=10; 
    x=m; 
    while(x!=0) 
 {
  y=y+(x%10)*n; 
        x/=10; 
        n/=10; 
 } 
    if(y==m) 
		w=0;
    else 
    w=1;
	return(w);
}
		

void main()
{int m,n,a,b,i,j=0,c;
scanf("%d %d",&m,&n);
for(i=0;i<=n-m;i++)
{a=p(m+i);
b=q(m+i);
if(a==0&&b==0)
{printf("%d",m+i);
j=j+1;
c=i;
break;}
}
for(i=c+1;i<=n-m;i++)
{a=p(m+i);
b=q(m+i);
if(a==0&&b==0)
{printf(",%d",m+i);
j=j+1;}
}
if(j==0)
printf("no");


}
