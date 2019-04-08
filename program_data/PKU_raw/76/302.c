int main(){
	int a[50000];
	int b[50000];
    int n,i,j,e,f,l,x,y;
    scanf("%d",&n);
    for(j=0;j<n;j++)
	{
      scanf("%d %d",&(a[j]),&(b[j]));
     }
    for(i=0;i<(n-1);i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				e=a[j+1];
                a[j+1]=a[j];
                a[j]=e;
				f=b[j+1];
				b[j+1]=b[j];
				b[j]=f;
            }
        }
    }
x=a[0];
y=b[0];
for(i=0;i<n-1;i++)
{
	if (a[i+1]<=y)
	{
	if(y<b[i+1])
	{y=b[i+1];}
	}
	else
	{break;}
}
if(i<n-1)
{printf("no\n");}
else if(i==n-1)
{printf("%d %d\n",x,y);}
return 0;
}

