
float dist(int a,int b,int c,int a1,int b1,int c1);
int toi(int fi,int ni);
int toj(int fj,int nj);

int main()
{
	int x[10],y[10],z[10];
	int n,i,j,o=1,flag,ansi,ansj;
	float d[46];
	float max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    scanf("%d%d%d",&x[i],&y[i],&z[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
	        d[o]=dist(x[i],y[i],z[i],x[j],y[j],z[j]);
			o++;
		}
	}
	for(i=1;i<o;i++)
	{
		max=0;
		for(j=1;j<o;j++)
		{
			if(d[j]>max)
			{
				max=d[j];
				flag=j;
			}
			else
				continue;
		}
		ansi=toi(flag,n);
		ansj=toj(flag,n);
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[ansi],y[ansi],z[ansi],x[ansj],y[ansj],z[ansj],max);
		d[flag]=0;
	}
	return 0;
}

float dist(int a,int b,int c,int a1,int b1,int c1)
{
	float D;
	D=sqrt((a-a1)*(a-a1)+(b-b1)*(b-b1)+(c-c1)*(c-c1));
	return(D);
}

int toi(int fi,int ni)
{
	int ai,testfi,qi;
	testfi=fi;
	qi=1;
	do
	{
	    if(testfi-(ni-qi)<=0)
		{
			ai=qi-1;
			break;
		}
		else
		{
			testfi-=ni-qi;
	        qi++;
		}
	}while(qi<ni);
	return(ai);
}

int toj(int fj,int nj)
{
	int aj,testfj,qj;
	testfj=fj;
	qj=1;
	do
	{
		if(testfj-(nj-qj)<=0)
		{
			aj=testfj+qj-1;
			break;
		}
		else
		{
			testfj-=nj-qj;
			qj++;
		}
	}while(qj<nj);
	return(aj);
}