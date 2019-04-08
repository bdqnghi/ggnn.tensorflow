void main()
{
	int n,i,j,len1,len2,t;
	char c[100],d[100];
    int a[100],b[100];
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
        for(i=0;i<100;i++)
		{ 
			a[i]=b[i]=0;
			c[i]=d[i]='\0';
		}
     	scanf("%s %s",c,d);
		len1=strlen(c);
		len2=strlen(d);
		for(i=99;i>99-len1;i--)
		{
			switch(c[i+len1-100])
			{
			case'0':a[i]=0;break;
            case'1':a[i]=1;break;
	        case'2':a[i]=2;break;
            case'3':a[i]=3;break;
            case'4':a[i]=4;break;
            case'5':a[i]=5;break;
	        case'6':a[i]=6;break;
            case'7':a[i]=7;break;
            case'8':a[i]=8;break;
            case'9':a[i]=9;
			}
		}

        for(i=99;i>99-len2;i--)
		{
			switch(d[i+len2-100])
			{
			case'0':b[i]=0;break;
            case'1':b[i]=1;break;
	        case'2':b[i]=2;break;
            case'3':b[i]=3;break;
            case'4':b[i]=4;break;
            case'5':b[i]=5;break;
	        case'6':b[i]=6;break;
            case'7':b[i]=7;break;
            case'8':b[i]=8;break;
            case'9':b[i]=9;
			}
		}

		for(i=0;i<100;i++)
		{
			a[i]=a[i]-b[i];
		}

		for(i=99;i>0;i--)
		{
			if(a[i]<0)
			{
				a[i]=10+a[i];
				a[i-1]--;
			}
		}
	     for(i=0;;i++)
			 if(a[i]!=0)break;

		for(t=i;t<100;t++)
			printf("%d",a[t]);

		printf("\n");
	}
}


