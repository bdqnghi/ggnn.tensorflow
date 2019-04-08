int main()
{
	int n,i,j,x1=0,x2=0,q=0,w1,w2,w3,w4,w5,w6,t,k,m=1,p=1,l=0,g;
	scanf("%d",&n);
	int a[10][3],c[1000],d[1000],e[1000],c1[1000],d1[1000],e1[1000],c2[1000]={0};
	float b[1000]={0};
	float x,y;
	for(int i1=0;i1<=n-1;i1++)
	{
		scanf("%d %d %d",&a[i1][0],&a[i1][1],&a[i1][2]);
	}
	for(x1=0;x1<=n-2;x1++)
	{
		for(x2=x1+1;x2<=n-1;x2++)
		{
		      b[q]=sqrt((float)((a[x2][0]-a[x1][0])*(a[x2][0]-a[x1][0])+(a[x2][1]-a[x1][1])*(a[x2][1]-a[x1][1])+(a[x2][2]-a[x1][2])*(a[x2][2]-a[x1][2])));
			  c[q]=a[x1][0];   d[q]=a[x1][1];  e[q]=a[x1][2];  c1[q]=a[x2][0];  d1[q]=a[x2][1];  e1[q]=a[x2][2];
			 
			  q++;
		}
	}
	for(i=q-1;i>=1;i--)
	{
		for(j=i-1;j>=0;j--)
		{
			if(b[i]>=b[j])
			{
				x=b[i];
				b[i]=b[j];
				b[j]=x;
				w1=c[i]; w2=d[i]; w3=e[i]; w4=c1[i]; w5=d1[i]; w6=e1[i];
				c[i]=c[j]; d[i]=d[j]; e[i]=e[j]; c1[i]=c1[j]; d1[i]=d1[j]; e1[i]=e1[j];
				c[j]=w1; d[j]=w2; e[j]=w3; c1[j]=w4; d1[j]=w5; e1[j]=w6;
				
			}
		}
	}
	for(int h=0;h<=q-1;h++)
	{
		if(b[h]!=b[h+1]) {c2[p]=h; p++;}
	} 
	for(int h1=999;h1>=0;h1--)
	{
		if(c2[h1]>0) {g=h1;break;}
	}
	if(g<1) {g=1;}
	c2[0]=-1;
	for(int x4=0;x4<=g-1;x4++)
	{
		for(int x5=c2[x4]+1;x5<=c2[x4+1];x5++)
		{
			k=c2[x4]+1+c2[x4+1]-x5;
			printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",c[k],d[k],e[k],c1[k],d1[k],e1[k],b[k]);
		}
	}


	return 0;
}