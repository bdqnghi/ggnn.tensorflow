
int main()
{
	char voids[101];
	char a[101];
	char str [102];
	char vstr[101];
	char b[101];
	int i;
	int lena,lenb,lenv;
	gets(vstr);
	gets (a);
	gets (b);

	lena=0;
	lenb=0;
	lenv=0;

	for(i=0;i<101;i++)
	{
		voids[i]=0;
	}

	str[0]=32;
	for(i=1;i<102;i++)
	{
		str[i]=vstr[i-1];
	}
	/*for(i=0;str[i]!=0;i++)
	{
		printf("%c",str[i]);
	}*/
	//printf("\n");

	/*for(i=0;str[i]!=0;i++)
	{
		printf("%d ",str[i]);
	}*/
	//printf("\n");





	for(i=0;a[i]!=0;i++)
	{
		lena++;
	}

	for(i=0;b[i]!=0;i++)
	{
		lenb++;
	}

	//printf("%d %d\n", lena,lenb);




	for(i=0;i<101&&str[i]!=0;)
	{
		if(str[i]==32)
		{
			int j,k;
			k=1;
			for(j=1;j<lena+1;j++)
			{
				if(str[j+i]!=a[j-1]) {k=0;break;}
				if(str[j+i]==0) {k=0;break;}
				if(str[j+i]==32) {k=0;break;}
			}
			
			if(k==1) 
			{
				int p;
				voids[lenv]=32;
				
				for(p=1;p<lenb+1;p++)
				{
					voids[lenv+p]=b[p-1];
				}
				lenv+=(lenb+1);
				i+=(lena+1);
		
			}
			//printf("%d",k);

			if(k==0)
			{
				voids[lenv]=str[i];
				i++;
				lenv++;
			}
		}
		else 
		{
			voids[lenv]=str[i];
			i++;
			lenv++;
		}
	}
	//printf("\n");

	if(voids[0]==32)
	{
		for(i=0;i<100;i++)
		{
			voids[i]=voids[i+1];
		}
	}
			



	for(i=0;voids[i]!=0;i++)
	{
		printf("%c",voids[i]);
	}
}

