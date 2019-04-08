int main (){

int n,i,sz[100][2];
double bj[100];

scanf ("%d",&n);
for(i=0;i<n;i++)
	{scanf ("%d %d",&sz[i][0],&sz[i][1]);
	bj[i]=1.0*sz[i][1]/sz[i][0];
	}

for(i=1;i<n;i++)
	{if(bj[i]-bj[0]>0.05)
		{printf("better\n");
		}
	else if(bj[0]-bj[i]>0.05)
		{printf("worse\n");
		}
	else 
		{printf("same\n");
		}
	}

return 0;
}