void main()
{
	int i,z,j,k=0,l,y,x,p=1;
	char *s,*a,*b,**o;
	s=(char *)malloc(1000*sizeof(char));
	a=(char *)malloc(110*sizeof(char));
	b=(char *)malloc(110*sizeof(char));
	o=(char **)malloc(10*sizeof(char *));
	for(i=0;i<10;i++)
		o[i]=(char *)malloc(110*sizeof(char));
	gets(o[k]);
	z=strlen(o[k]);
	scanf("%s %s",a,b);
	y=strlen(a);
	x=strlen(b);
	while(p==1)
	{
		p=0;
		for(i=0;i<z;i++)
		{
			if(o[k][i]==a[0]&&(o[k][i-1]==' '||i==0))
			{
				for(l=1;l<y;l++)
					if(a[l]!=o[k][i+l])
						break;
					if(l==y)
					{
						p=1;
						for(j=0;j<i;j++)
							o[k+1][j]=o[k][j];
						for(j=i;j<i+x;j++)
							o[k+1][j]=b[j-i];
						for(j=i+x;j<z-y+x;j++)
							o[k+1][j]=o[k][j+y-x];
						k++;
						z=z-y+x;
						break;
					}
			}
		}
	}
	for(i=0;i<z;i++)
		printf("%c",o[k][i]);
	printf("\n");
}