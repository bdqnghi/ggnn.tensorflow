int check(int b[],int x)
{
	switch(x)
	{
	case 0:
		if(b[4]==1)
			return 1;
		else
			return 0;
		break;
	case 1:
		if(b[1]==2)
			return 1;
		else
			return 0;
		break;
	case 2:
		if(b[0]==5)
			return 1;
		else 
			return 0;
		break;
	case 3:
		if(b[2]!=1)
			return 1;
		else
			return 0;
		break;
	case 4:
		if(b[3]==1)
			return 1;
		else 
			return 0;
		break;
	}
}
void pai(int c[],int m,int k)
{
	int i,j,t,g;
	int n[6];
	if(m==k)
	{
		for(i=1;i<=5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(i==c[j])
				{
					n[i]=j;
				}
			}
		}
		if(check(c,n[1])&&check(c,n[2])&&(check(c,n[3])==0)&&(check(c,n[4])==0)&&(check(c,n[5])==0)&&(c[4]!=2)&&(c[4]!=3))
		{
			for(g=0;g<4;g++)
				printf("%d ",c[g]);
			printf("%d",c[4]);
		}
	}
	if(m<k)
	{
		for(i=m;i<=k;i++)
		{
			t=c[i];
			c[i]=c[m];
			c[m]=t;
			pai(c,m+1,k);
			t=c[i];
			c[i]=c[m];
			c[m]=t;
		}
	}
}



int main()
{
	int i,j;
	int h[5]={1,2,3,4,5};
	pai(h,0,4);


	return 0;
}