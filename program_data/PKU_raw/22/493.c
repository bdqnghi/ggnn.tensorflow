int main()
{
	int a[1000],i,t,num,j,k;
	int max(int a,int b);
    int min(int a,int b);
	char c;
//input the sequence
	for(i=1;;i++)                  
	{                               
		scanf("%d",&a[i-1]);       
		scanf("%c",&c);            
		if(c=='\n')break;                                             
	}

	num=i;
//???
	for(j=1;j<=num-1;j++)
	{
		for(k=num;k>=j+1;k--)
		{
			t=max(a[k-1],a[k-2]);
			a[k-1]=min(a[k-1],a[k-2]);
			a[k-2]=t;
		}
	}
//find the sec_max
	for(i=1;i<=num-1;i++)
	{
		if(a[i-1]!=a[i])
		break;
	}
    if(i<num-1)printf("%d",a[i]);
    else 
	{
		if(i==num-1)printf("%d",a[i]);
		else printf("No");
	}
	return 0;
}


//the function to find the larger and the smaller

int max(int a,int b)
{
	int e;
	if(a<b)e=b;
	else e=a;
	return e;
}

int min(int a,int b)
{
	int e;
	if(a>b)e=b;
	else e=a;
	return e;
}