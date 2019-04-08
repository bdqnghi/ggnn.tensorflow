void main()
{
int c=0,n,i,t=0,a[100],b[100];
scanf("%d\n",&n);
for(i=0;i<n;i++)
scanf("%d %d\n",&a[i],&b[i]);
for(i=0;i<n;i++)
{
	if((a[i]>=90)&&(a[i]<=140)&&(b[i]>=60)&&(b[i]<=90))
					c++;
	else 
			{if(c>t)
				t=c;
	c=0;}

}
if(c>0)
{
if(c>t)
t=c;
}
printf("%d\n",t);
}
