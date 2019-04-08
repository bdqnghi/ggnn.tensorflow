
int main(int argc, char* argv[])
{int z=0,n,x,y,i,b,k;
double dis;
	float dian[100][100];
    double bijiao[100];

	scanf("%d",&n);
    for (x=0;x<n;x++)
		{for (y=0;y<2;y++)
			{
				scanf("%f",&dian[x][y]);
			}
		}

	for (i=0;i<n-1;i++)
		{for (k=i+1;k<n;k++)
				{bijiao[z]=sqrt((dian[k][0]-dian[i][0])*(dian[k][0]-dian[i][0])+(dian[k][1]-dian[i][1])*(dian[k][1]-dian[i][1]));
				z=z+1;
				}
		}
	dis=bijiao[0];
	for (b=1;b<=z;b++)
		{if (bijiao[b]>dis)
				{dis=bijiao[b];}
		else {dis=dis;}
		}
	printf("%.4f\n",dis);
			
	return 0;
}
