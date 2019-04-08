
int main()
{
	int i=0,j=0,s=0;
	int lena,lenb,x,y;
	int a[16]={0};
	int b[20]={0};


	while(1)
	{  
		while(scanf("%d",&a[i]))
		{
			if((a[i]==0)||(a[i]==-1))
				break;
			else
			{		
			    i++;
				continue;
			}
		}

		if(a[0]==-1)
			break;
		else
		{
		    lena=i;

		    for(x=0;x<lena;x++)
			{
			    for(y=x+1;y<=lena;y++)
				{
				    if((a[x]==2*a[y])||(a[y]==2*a[x]))
					    s++;
				}
			}

			b[j]=s;
			s=0;
		}
		j++;
		for(i=0;i<16;i++)
			a[i]=0;
		i=0;
	}
		    
	for(i=0;i<j;i++)
		printf("%d\n",b[i]);
	return 0;
}
