float m[50];
float f[50];
int main()
{
	int total,count;
	float meter;
	char str[10];
	int mt,ft;
	int i,j;
	scanf("%d",&total);
	mt=ft=0;
	for(count=0;count<total;count++)
	{
		scanf("%s %f",&str,&meter);

		if(!strcmp(str,"male"))
		{
			m[mt++]=meter;
		}
		else
		{
			f[ft++]=meter;
		}
	}
	for(i=0;i<mt;i++)
		for(j=i+1;j<mt;j++)
			if(m[i]>m[j])
			{
				meter=m[i];
				m[i]=m[j];
				m[j]=meter;
			}
	for(i=0;i<ft;i++)
		for(j=i+1;j<ft;j++)
			if(f[i]<f[j])
			{
				meter=f[i];
				f[i]=f[j];
				f[j]=meter;
			}
	for(i=0;i<mt;i++)
		printf("%.2f ",m[i]);
	for(i=0;i<ft-1;i++)
		printf("%.2f ",f[i]);
	printf("%.2f\n",f[i]);
	return 0;
}