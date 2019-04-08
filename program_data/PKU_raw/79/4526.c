void main()
{int i,j,k,m[100],n[100],num[301],a[100],*p;
for(j=0;;j++)
	{scanf("%d %d",&n[j],&m[j]);
	if(n[j]==0&&m[j]==0)
	break;
	}
for(j=0;;j++)
	{if(n[j]==0&&m[j]==0)
	break;
	p=num;
	for(i=0;i<n[j];i++)
		*(p+i)=i+1;
	i=0;
	k=0;
	a[j]=0;
	while(a[j]<n[j]-1)
		{if(*(p+i)!=0) k++;
		if(k==m[j])
			{*(p+i)=0;
			k=0;
			a[j]++;
			}
		i++;
		if(i==n[j]) i=0;
		}
	while(*p==0) p++;
	printf("%d\n",*p);
	}
}

