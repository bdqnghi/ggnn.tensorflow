int main()
{
int sz1[100],sz2[100],sz3[100],n,i,j,k=0,r,a[100],b[100];
double q[10][10],p[10][10],temp,m[72];
scanf("%d",&n);
for(i=0;i<=n-1;i++)
    {
    scanf("%d%d%d",&sz1[i],&sz2[i],&sz3[i]);
    }
for(i=0;i<=n-1;i++)
    {
    for(j=i+1;j<=n-1;j++)
    	{
        	q[i][j]=1.0*((sz1[i]-sz1[j])*(sz1[i]-sz1[j])+(sz2[i]-sz2[j])*(sz2[i]-sz2[j])+(sz3[i]-sz3[j])*(sz3[i]-sz3[j]));
		p[i][j]=sqrt(q[i][j]);
        	m[k]=p[i][j];
		a[k]=i;
		b[k]=j;
        	k=k+1;
		}
	}
for(r=0;r<(n*(n-1)/2);r++)
    {
        for(k=0;k<=n*(n-1)/2-2;k++)
            {
                if(m[k]<m[k+1])
                    {
                        temp=m[k];
                        m[k]=m[k+1];
                        m[k+1]=temp;
        	temp=a[k];
			a[k]=a[k+1];
			a[k+1]=temp;
			temp=b[k];
			b[k]=b[k+1];
			b[k+1]=temp;
		}
            }
    }
for(k=0;k<(n*(n-1))/2;k++)
	{
    printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",sz1[a[k]],sz2[a[k]],sz3[a[k]],sz1[b[k]],sz2[b[k]],sz3[b[k]],m[k]);
	}
return 0;
}

