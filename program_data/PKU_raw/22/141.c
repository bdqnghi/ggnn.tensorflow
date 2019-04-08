int f1(int k)
{
	int i,a=1;
	for(i=1;i<=k;i++)
		a=a*10;
    return(a);
}

void main()
{
	int i,j,k=1,p=0,sign=2;
	char s[1500],a[301][5];
	gets(s);
    for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=48 && s[i]<=57)
		{
			a[k][p]=s[i];
			p++;
		}
		else if(s[i]==44)
		{
			a[k][p]='\0';
			k++;
			p=0;
		}
	}
	a[k][p]='\0';
	for(i=2;i<=k;i++)
	{
		if(strcmp(a[1],a[i])!=0){p=-1;break;}
	}
	if(k==1 || p!=-1)printf("No");
else
{
	
	for(i=1;i<=sign;i++)
	{
		for(j=1;j<=k-i;j++)
		{
			if(strlen(a[j])>strlen(a[j+1]))
			{
				strcpy(a[0],a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],a[0]);
			}
			else if(strlen(a[j])==strlen(a[j+1]))
			{
				if(strcmp(a[j],a[j+1])>0)
				{
					strcpy(a[0],a[j]);
				    strcpy(a[j],a[j+1]);
				    strcpy(a[j+1],a[0]);
				}
			}
		}
	}
	for(i=1;;i++)
	{
		if(strcmp(a[k],a[k-sign+1])==0)
		{
		    sign++;
		    for(j=1;j<=k-sign;j++)
			{
			    if(strlen(a[j])>strlen(a[j+1]))
				{
				    strcpy(a[0],a[j]);
				    strcpy(a[j],a[j+1]);
				    strcpy(a[j+1],a[0]);
				}
		    	else if(strlen(a[j])==strlen(a[j+1]))
				{
			     	if(strcmp(a[j],a[j+1])>0)
					{
				    	strcpy(a[0],a[j]);
				        strcpy(a[j],a[j+1]);
				        strcpy(a[j+1],a[0]);
					}
				}
			}
		}
		else break;
	}
	for(i=0;a[k-sign+1][i]!='\0';i++)
		printf("%c",a[k-sign+1][i]);
}
}


		  





