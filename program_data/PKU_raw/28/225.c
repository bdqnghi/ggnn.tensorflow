void main()
{
	char a[10000]={""},b[50]={""};
	int num=0,w,i=0,j=0,k=0;
	gets(a);
	w=0;
	while(a[i])
	{
		if((a[i]!=' ')&&(w=0))
		{
			

			b[j]=a[i];w=1;
		}
		else
		{
			if((a[i]!=' ')&&(w=1))
			{
				j++;
				b[j]=a[i];w=1;
			}
			else
			{
				if(a[i]==' ')
				{
					
					if((k==0)&&(w==1))
					{
						printf("%d",j);
					}
					else
					{
						if((k==1)&&(w==1))

							printf(",%d",j);
					}
					w=0;k=1;j=0;
				}
			}
		}
		i++;
	}
	if((k==0)&&(w==1))
					{
						printf("%d",j);
					}
					else
					{
						if((k==1)&&(w==1))

							printf(",%d",j);
					}
}