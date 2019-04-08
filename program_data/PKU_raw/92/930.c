int match(int n,int a[1000],int b[1000]) /*a ???b??*/
{
	int i,tempb[1000],tempa[1000];
	for(i=0;i<n;i++)
	{tempb[i]=b[i];tempa[i]=a[i];}
	if(n==1)
	{
		if(a[0]>b[0])
			return(200);
		if(a[0]<b[0])
			return(-200);
		return(0);
	}
	else if(n>1)
	{
		if(a[0]>b[0])
		{for(i=0;i<n-1;i++){
			tempb[i]=tempb[i+1];tempa[i]=tempa[i+1];}
			return(match(n-1,tempa,tempb)+200);
		}
		else if(a[n-1]>b[n-1])
			return(match(n-1,a,b)+200);
		else{
			for(i=0;i<n-1;i++)
				tempb[i]=tempb[i+1];
			if(a[n-1]<b[0])
				return(match(n-1,a,tempb)-200);
			return(match(n-1,a,tempb));
		}
	}
}
void main()
{
	int match(int n,int a[1000],int b[1000]);
	int a[1000],b[1000],n,t1,t2,prize,i,j;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)break;
		else
		{
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			for(i=0;i<n;i++)
				scanf("%d",&b[i]);
			for(i=0;i<n;i++)
				for(j=i+1;j<n;j++){
				if(a[j]>a[i]){t1=a[j];a[j]=a[i];a[i]=t1;}
			    if(b[j]>b[i]){t2=b[j];b[j]=b[i];b[i]=t2;}
			}
			prize=match(n,a,b);
			printf("%d\n",prize);
		}
	}
}
			





























			

    

