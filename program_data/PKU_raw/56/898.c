void main()
{
int a[5];
int i,j,m,n;
scanf("%d",&n);
for(i=5;i>0;)
{
	j=(int)pow(10,i-1);
	if(n/j!=0)break;
	i--;
}
for(j=0;j<i;j++)
{m=(int)pow(10,i-1-j);
 a[j]=(int)(n/m)-10*((int)(n/(10*m)));
}
for(j=0;j<i;j++)
 printf("%d",a[i-1-j]);
}
