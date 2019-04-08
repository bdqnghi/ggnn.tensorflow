int main()
{ int i,j,a[1000]={0},b[1000]={0},n=0,n1=0,mid;
int min1=1000,max1=0,min2=1000,max2=0,d[1000]={0};
int t =0,max=0;
char c;
for(;;)
	{
		scanf("%d", &a[n1++]);
		scanf("%c", &c);
		if(c != ',')
			break;
	}

//n1??
for(;;)
	{
		scanf("%d", &b[n++]);
		scanf("%c", &c);
		if(c != ',')
			break;
	}

for(i=0;i<n1;i++)
		{  	if(a[i]>max1)
				max1=a[i];
if(b[i]>max2)
				max2=b[i];
					if(a[i]<min1)
				min1=a[i];
if(b[i]<min2)
				min2=b[i];
					
}	
for(i=min1;i<=max2;i++)				
{for(j=0;j<n1;j++)
{if(a[j]<=i&&b[j]>i)
d[t]++;
}
t++;
}

for(i=0;i<t;i++)
{	if(d[i]>max)
				max=d[i];
}
printf("%d %d",n1,max);
			
		
		


return 0;

}