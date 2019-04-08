
int main()
{
	int i,j,k,l,r,c,a[100][100];
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	l=0;
	k=1;
	if(r==1&&c==1)
		printf("%d",a[0][0]);
	else
	{
	for(j=0;;)
	{
		switch (k)
		{
		case 1: goto p1;break;
		case 2: goto p2;break;
		case 3: goto p3;break;
		case 4: goto p4;
		}
p1:{
		for(i=l;i<c-l;i++)
		{
			printf("%d\n",a[l][i]);
			j++;
			if(j==r*c)
				goto out;
		}
		goto end;
   }
p2:{
		for(i=l+1;i<r-l-1;i++)
		{
			printf("%d\n",a[i][c-l-1]);
			j++;
			if(j==r*c)
				goto out;
		}
		goto end;
   }
p3:{
		for(i=c-l-1;i>=l;i--)
		{
			printf("%d\n",a[r-l-1][i]);
			j++;
			if(j==r*c)
				goto out;
		}
		goto end;
   }
p4:{
		for(i=r-l-2;i>l;i--)
		{
			printf("%d\n",a[i][l]);
			j++;
			if(j==r*c)
				goto out;
		}
		goto end;
   }
end:
	{
		k++;
		if(k>4)
		{
			k=1;
			l++;
		}
	}
	}
	}
out:;
	return 0;
}
