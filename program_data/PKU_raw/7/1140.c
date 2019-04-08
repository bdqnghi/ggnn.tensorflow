int main()
{
	int i,j,p,changdu1,changdu2,changdu3,m;
	char x[256]={0},y[256]={0},z[513]={0},media[256][256]={0};
	scanf("%s",x);
	scanf("%s",y);
	scanf("%s",z);
	changdu1=strlen(x);
	changdu2=strlen(y);
	changdu3=strlen(z);
	for(i=0;i<changdu1-changdu2+1;i++)
	{
		for(j=0;j<changdu2;j++)
			media[i][j]=x[i+j];
	}
	for(i=0;i<changdu1-changdu2+1;i++)
	{
		if(strcmp(media[i],y)==0)
		{
			p=i;
			break;
		}
	}
	if(i>=changdu1-changdu2+1)
	{
		for(i=0;i<changdu1;i++)
			printf("%c",x[i]);
	}
	else
	{
		strcpy(media[p],z);
		if(p!=0)
		{
			for(i=0;i<p;i++)
				printf("%c",x[i]);
			printf("%s",media[p]);
			if(changdu2>changdu3)m=changdu2;
			else m=changdu3;
			for(i=p+m;i<changdu1;i++)
				printf("%c",x[i]);
			printf("\n");
		}
		else
		{
			printf("%s",media[p]);
			for(i=p+changdu3;i<changdu1;i++)
				printf("%c",x[i]);
			printf("\n");
		}
		
	}
	return 0;
}
