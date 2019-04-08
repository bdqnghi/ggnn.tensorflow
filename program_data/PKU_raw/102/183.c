

int main()
{
	int n;
	int mi=1;
	int fi=1;
	char sex[10]="male";
	char s[10]={'\0'};

	float m[41]={0};
	float f[41]={0};

	int i=1,j=1;
	scanf("%d",&n);

	while(n--)
	{
			
		

			scanf("%s",s);
//			printf("%s\n",s);
			if(s[0]=='m') 	
			{
				scanf("%f",&m[mi++]);
//				printf("mmmm"); 
			}
			else
			{
				scanf("%f",&f[fi++]);
//				printf("ffff"); 
			}
//			printf("%s\n",s);
//			printf("%d\n",mi);
		
	}
//	printf("%d\n",mi);



	for(i=1;i<mi-1;i++)
	{
		for(j=mi-1;j>i;j--)
		{
			float tem;
			if(m[i]>m[j])
			{tem=m[i];m[i]=m[j];m[j]=tem;}
		}
	}

//
	for(i=1;i<mi;i++)
		{
			printf("%.2f ",m[i]);
		}


	for(i=1;i<fi-1;i++)
	{
		for(j=fi-1;j>i;j--)
		{
			float tem;
			if(f[i]<f[j])
			{tem=f[i];f[i]=f[j];f[j]=tem;}
		}
	}
//
		for(i=1;i<fi-1;i++)
		{
			printf("%.2f ",f[i]);
		}
	printf("%.2f\n",f[i]);


//	for(i=1;i<=mi;i++){printf("%d",m[i]);}
//	for(i=1;i<=fi;i++){printf("%d",f[i]);}

	mi=1;fi=1;

	return 0;
}
