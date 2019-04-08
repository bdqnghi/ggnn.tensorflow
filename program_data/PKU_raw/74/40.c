int ws(int x)
{	int i=1,c=1;
	for(i=1;;i*=10)
	{	c++;
		if((i<=x)&&(i*10>x)) break;
	}
	return(c-1);
}
int check1(int x)
{	int p=1,i;
	for(i=2;i<x;i++)
		if(x%i==0)
		{p=0;break;
		}
	return(p);
}
int reconstruct(int x)
{	int i=1,res=x%10;
	while(x!=0)
	{	x=x/10;
		res=res*10+x%10;
	}
	return(res/10);
}
int check2(int x)
{	int p=0;
	if(x==reconstruct(x)) p=1;
	return(p);
}
void main()
{	int m,n,i,j,flag=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
		if(check1(i)==1&&check2(i)==1)
		{printf("%d",i);
		flag=1;
		break;
		}
	for(j=i+1;j<=n;j++)
		if(check1(j)==1&&check2(j)==1)
		printf(",%d",j);
	if(flag==0)printf("no");
	printf("\n");
}