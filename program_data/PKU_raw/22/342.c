void main()
{
	int m,n=0,i,j,len,k=0,a=0,b=0;
	int f[300]={0};
	char c[300][5]={0};
	char d;
	i=0;j=0;
	do
	{
		scanf("%c",&d);
		if(d=='\n') {c[i][j]='\0';break;}
		else if(d==','){c[i][j]='\0';i++;j=0;}
		else {c[i][j]=d;j++;}
	}while(1);
	n=i+1;
	for(i=0;i<n;i++) 
	{
		k=0;
		for(j=3;j>=0;j--)
		{
			if((c[i][j]!=0)&&(k==0)) 
			{f[i]=f[i]+c[i][j]-'0';
			k++;
			continue;}
			else if((c[i][j]!=0)&&(k==1))
			{f[i]=f[i]+(c[i][j]-'0')*10;
			k++;
			continue;}
			else if((c[i][j]!=0)&&(k==2))
			{f[i]=f[i]+(c[i][j]-'0')*10*10;
			k++;
			continue;}
			else if((c[i][j]!=0)&&(k==3)) 
			{f[i]=f[i]+(c[i][j]-'0')*10*10*10;
			k++;
			continue;}
		}
	}
	for(i=0;i<n;i++) 
	{
		if(f[i]>a) {b=a;a=f[i];}
		else if((f[i]<a)&&(f[i]>b)) b=f[i];
	}
	if(b==0) printf("No");
	else printf("%d",b);
}
