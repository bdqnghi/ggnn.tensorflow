
int main()
{
	int c,a[100000],b,i,j,k,f=0;
	scanf("%d",&c); 

	for (j=0;j<=c-1;j++)
	{scanf("%d",&a[j]);}

    scanf("%d",&b);
	for (j=0;j<=c-1;j++)
	{if (a[j]==b) 
	{for (k=j+1;k<c;k++)
	{if(a[k]!=b) {a[j]=a[k];a[k]=b;break;}
	}}
        if (a[j]==b) break; 
	}

	for (i=0;i<j;i++)
	{if (i==j-1)
	printf("%d",a[i]);
	else 	printf("%d ",a[i]);}
   	
}
