
int main()
{
	int i,k,a,j,c=0,have[26];
	char fh[300],xin[26],haha;
	gets(fh);
	k=strlen(fh);
	for(i=0;i<k;i++)
	{
		if(fh[i]>='a'&&fh[i]<='z')
		{
			xin[c]=fh[i];
            c+=1;
		    a=1;
		    for(j=i+1;j<k;j++)
			{
			    if(fh[i]==fh[j])
				{
					a+=1;
					fh[j]='0';
				}
			}
			have[c-1]=a;
			
		}
	}
	if(c==0)
		printf("No\n");
	else
	{
        for(i=0;i<c;i++)
		{
			for(j=i+1;j<c;j++)
			{
				if(xin[j]<xin[i])
				{
					haha=xin[i];
					xin[i]=xin[j];
					xin[j]=haha;
					k=have[i];
					have[i]=have[j];
					have[j]=k;
				}
			}
			printf("%c=%d\n",xin[i],have[i]);
		}
	}

	return 0;


}