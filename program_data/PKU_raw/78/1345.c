int main ()
{
	int a[4], i, t,j;
	char b[5] = {"zqsl"}, c;
	for (a[0] = 1;a[0] <= 5;a[0]++)
         for (a[1] = 1;a[1] <= 5;a[1]++)
			 if ( a[0]!=a[1])
			 {
                 for (a[2] = 1;a[2] <= 5;a[2]++) 
				 {
					 if(a[2] != a[1] && a[2]!=a[0])
					 {
                        for (a[3] = 1;a[3] <= 5;a[3]++)
						{
							if(a[3]!=a[0] && a[3]!=a[1] && a[3]!=a[2])
							{
								if(a[0]+a[1]==a[2]+a[3] && a[0]+a[3]>a[2]+a[1] && a[0]+a[2]< a[1])
								{
									for (i=0;i < 3;i++)
										for (j=0;j<3-i;j++)
										{
											if(a[j]<a[j+1])
											{
												t = a[j]; a[j] = a[j+1];a[j+1]=t;
												c = b[j]; b[j] = b[j+1];b[j+1] = c;
											}
										}
										for (i = 0;i<4;i++)
											cout << b[i] <<' '<<10*a[i]<<endl;
								}
							}
						}
					 }
				 }
			 }
	 return 0;
}