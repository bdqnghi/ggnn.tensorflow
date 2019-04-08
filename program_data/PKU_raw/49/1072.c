int main()
{
	char a[501]={0};
	int i,j,k,t,m,q,p=0;
	gets(a);
	int b[501]={0};

	for(i=0;a[i]!='\0';i++)
		if(a[i]==a[i+1])
			b[i]=1;//????????
		
	for(j=1;j<250;j++)//j?????????  xuyaoxiugai!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		{
			for(q=0;q<500;q++)
			{	p=0;
			if(b[q]==1)
			{
			for(t=0;t<j;t++)//<<<<<<<<<<========????????
			{if(a[q-t]==a[q+t+1])
			p++;}
			if(p==j)
				{for(m=0;m<2*j;m++)
					printf("%c",a[q-t+m+1]);
					printf("\n");}
				
			}}

	
	}}