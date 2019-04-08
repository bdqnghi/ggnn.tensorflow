int main(int argc, char* argv[])
{
	int a[100][100],b[10000],c[4];
	int m,n,e,i,j,t,k,l,p;
	scanf ("%d%d\n",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf ("%d",&a[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{	
			c[0]=i;
		        c[1]=j;
		        c[2]=m-i-1;
		        c[3]=n-j-1;
                t=c[0];			
		for (k=0;k<4;k++)
			if (c[k]<t)
				t=c[k];
			if (i==t)
				p=j-t+1;
			else if (j==n-t-1)
				p=n-t-1-t+i-t+1;
			else if (i==m-t-1)
				p=n-t-1-t+m-t-1-t+n-t-1-j+1;
			else if (j==t)
				p=n-t-1-t+m-t-1-t+n-t-1-t+m-t-1-i+1;
		for (l=0,e=0;l<t;l++)	
			e=e+2*(m-2*l-1)+2*(n-2*l-1);
		if (t==0)
			e=0;
	   	    b[e+p-1]=a[c[0]][c[1]];
		}
		for (i=0;i<m*n;i++)
		printf ("%d\n",b[i]);
	return 0;
}

