int main()
{
	int x1,y1,x2,y2,x3,y3,i,j,k,l,m,n,p,a[101][101],b[101][101],c[101][101],sum;
	scanf("%d %d",&x1,&y1);
	for (i=0;i<x1;i++)
		{for (j=0;j<y1;j++)
			{scanf("%d",&a[i][j]);
			}
		}
	scanf("%d %d",&x2,&y2);
	for (k=0;k<x2;k++)
		{for (l=0;l<y2;l++)
			{scanf("%d",&b[k][l]);
			}
		}
	x3=x1;
	y3=y2;
	for (m=0;m<x3;m++)
		{for (n=0;n<y3;n++)
			{sum=0;
			 for (p=0;p<y1;p++)
				{sum+=a[m][p]*b[p][n];
				}
			 c[m][n]=sum;
			}
		}
	for (m=0;m<x3;m++)
		{for (n=0;n<y3-1;n++)
			{printf("%d ",c[m][n]);
			}
		 if (n==y3-1)
			{printf("%d\n",c[m][n]);
			}
		}
	return 0;
}