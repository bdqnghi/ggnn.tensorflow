void main()
{
	char s[260],w[260],h[260];
	int l1,l2,i,j,k=0;
	scanf("%s",s);
	scanf("%s",w);
	scanf("%s",h);
	l1=strlen(s);
	l2=strlen(w);
	for(j=0;j<l1;j++)
	{
		if(s[j]==w[0])
		{
			for(i=1;i<l2;i++)
				if(s[j+i]!=w[i])
					break;
				if(i==l2)
				{
					k=1;
					break;
				}
		}
	}
				if(k)
				{
					for(k=0;k<j;k++)
						printf("%c",s[k]);
					for(k=0;k<l2;k++)
						printf("%c",h[k]);
					for(k=j+l2;k<l1;k++)
						printf("%c",s[k]);
					printf("\n");
				}
				else
				{
					printf("%s",s);}
	}
