void main()
{
int a[300];
int i,j,x,temp,count,max;
char c;
for(i=0;i<300;i++)
{
	scanf("%d%c",&a[i],&c);
	if(c=='\n')
	{
		count=i;
		break;
	}
}
for(x=1;x<=count;x++)
{
    for(i=0;i<count+1-x;i++)
	{
         if(a[i]<a[i+1])
		 {
	      temp=a[i];
		  a[i]=a[i+1];
		  a[i+1]=temp;
		 }
	}
}
    if(a[count]==a[0])
	{
	printf("No");
	}
	if(a[count]!=a[0])
	{
	   max=a[0];
	   for(j=0;j<=count;j++)
		{
	       if(a[j]==max){;}
		   else {printf("%d",a[j]);break;}
		}
	}
}
