
void main()
{
	char a[15]={'\0'},b[4]={'\0'},c[15]={'\0'},d;
	int num=0,j,max,q,len,t;

    while(1)
	{
		if((d= getchar())==EOF)
		{break;}
		a[0]=d;
		gets(&a[1]);
		max=0;
		len=strlen(a);
		for(j=0;j<3;j++)
		{b[j]=a[len+j-3];
		}
		for(j=0;j<len-4;j++)
		{
			t=a[j];
			if(t>max)
			{
				max=t;
				q=j;
			}
		}
        strcpy(c,a);
		for(j=q+1;j<q+4;j++)
		{a[j]=b[j-q-1];
		}
		for(j=q+4;j<len-1;j++)
		{a[j]=c[j-3];
		}

	
		for(j=0;j<len-1;j++)
		{printf("%c",a[j]);
		}
		printf("\n");
	}
	
}



