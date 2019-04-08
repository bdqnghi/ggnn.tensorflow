int deter(int *a)
{	
	int b[5],i,t[5];
	for(i=0;i<5;i++)b[a[i]]=i;	
	t[0]=a[4]==0;
	t[1]=a[1]==1;
	t[2]=a[0]==4;
	t[3]=a[2]!=0;
	t[4]=a[3]==0;
	if(t[b[0]]==1&&t[b[1]]==1&&t[b[2]]==0&&t[b[3]]==0&&t[b[4]]==0)return 1;
	else return 0;
}
int fr(int*n,int p)
{int q;
	for(q=0;q<p;q++)
		if(n[q]==n[p])return 0;
	return 1;
}
void main()
{	int a[5];
	for(a[0]=0;a[0]<5;a[0]++)
	{
		for(a[1]=0;a[1]<5;a[1]++)
		{if(fr(a,1))
			for(a[2]=0;a[2]<5;a[2]++)
			{if(fr(a,2))
				for(a[3]=0;a[3]<5;a[3]++)
				{if(fr(a,3))
					for(a[4]=0;a[4]<5;a[4]++)
					{if(fr(a,4)&&deter(a)&&a[4]!=1&&a[4]!=2)	
						printf("%d %d %d %d %d\n",a[0]+1,a[1]+1,a[2]+1,a[3]+1,a[4]+1);
					}
				}
			}
		}
	}
}