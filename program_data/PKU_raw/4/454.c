int main()
{int n,h,l,m,i,j,a[100][100],k;
		scanf("%d %d",&h,&l);
		for(k=0;k<h;k++)
			{for(j=0;j<l;j++)
				scanf("%d",&a[k][j]);
			}
		i=0;	
        while(i<l)
        {	k=i;
        	j=0;
			while(1)
        	{	printf("%d\n",a[j][k]);
        		k--;
                j++;
        		if(k<0||j==h)
        		break;
			}
			i++;		
		}
		i=1;
		while(i<h)
        {	k=i;
        	j=l-1;
			while(1)
        	{	printf("%d\n",a[k][j]);
        		k++;
                j--;
        		if(j<0||k==h)
        		break;
			}
			i++;		
		}
	return 0;
}