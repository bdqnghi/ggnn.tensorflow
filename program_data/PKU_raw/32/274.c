void main()
{
	int l1[25],l2[25],n,t,w,z,q,i,d,k,j;
	char c1[25][101],c2[25][101],c[101],a[25][101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c1[i]);
	//	gets(c1[i]);????????????????
		l1[i]=strlen(c1[i]);
	//	gets(c2[i]);
		scanf("%s",c2[i]);
		l2[i]=strlen(c2[i]);
		/*if(l1[i]<l2[i]||(l1[i]==l2[i]&&c1[0]<c2[0]))
		{
			strcpy(c,c1);
			strcpy(c1,c2);
			strcpy(c2,c);
			t=l1[i];l1[i]=l2[i];l2[i]=t;
		}*/
		d=l1[i]-l2[i];
		for(w=l2[i];w<l1[i]-1;w++)
			c2[i][w]='0';
		c2[i][l1[i]-1]='\0';
		
		q=0;c2[i][l1[i]]='\0';c2[i][l1[i]-1]='0';
		while(q!=d)
		{
			for (z=l1[i];z>0;z--)
			{
				c2[i][z]=c2[i][z-1];
			}
			c2[i][0]=c2[i][l1[i]];
			q++;
		}
		c2[i][l1[i]]='\0';




		for(k=l1[i];k>=0;k--)
		{
			if(c1[i][k]>=c2[i][k]) a[i][k]=c1[i][k]-c2[i][k]+48;
			if(c1[i][k]<c2[i][k]) 
			{
				a[i][k]=c1[i][k]+10-c2[i][k]+48;
				c1[i][k-1]=c1[i][k-1]-1;
			}
		}
		a[i][l1[i]]='\0';
		
	}
	for(i=0;i<n;i++)
	
		printf("%s\n",a[i]);
}
