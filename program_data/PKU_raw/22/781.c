int main()
{
int a[300],i=0,mark=0,j,k,p,h,q;
char ch[300];
while(1)
{
scanf("%d%c",&a[i],&ch[i]);
if(ch[i]!=',')
break;
i++;
}
if(i==0)
printf("No");
else
{
for(j=1;j<=i;j++)
{
	if(a[0]<a[j])
	{
		p=a[0];
		a[0]=a[j];
		a[j]=p;
	}
	
}
for(h=1;h<=i;h++)
{
	if(a[h]==a[0])
	a[h]=0;
}

for(k=2;k<=i;k++)
	{
	
		if(a[1]<a[k])
			a[1]=a[k];
	}
for(q=2;q<=i;q++)
{
	if((a[1]==a[k])||(a[1]==0))
		mark=1;
}
if(!mark)
printf("%d",a[1]);
}
if(mark)
printf("No");

return 0;
}