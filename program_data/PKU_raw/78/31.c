
void main()
{
	int a[4],i,j,t;
	char c[4]={'z','q','s','l'},te;
	for (a[0]=1;a[0]<6;a[0]++)
	{
		for (a[1]=1;a[1]<6;a[1]++)
		{
			if (a[1]==a[0]) continue;
			else 
				for (a[2]=1;a[2]<6;a[2]++)
				{
					if (a[2]==a[0]||a[2]==a[1]) continue;
					else 
						for (a[3]=1;a[3]<6;a[3]++)
						{
							if (a[3]==a[0]||a[3]==a[1]||a[3]==a[2]) continue;
							else if ((a[0]+a[1]==a[2]+a[3])&&(a[0]+a[3]>a[2]+a[1])&&(a[0]+a[2]<a[1]))
							{
								for  (i=0;i<4;i++)
								{
									for (j=0;j<3-i;j++)
									{
							     		if (a[j]<a[j+1])
										{
								    		t=a[j];
								    		a[j]=a[j+1];
								    		a[j+1]=t;
								    		te=c[j];
									    	c[j]=c[j+1];
										    c[j+1]=te;
										}
									}
								}
						    		for (i=0;i<4;i++)
							    	printf("%c %d\n",c[i],10*a[i]);
								}
						}
				}
		}
	}
}