void main()
{int i,j,k,max=0,t,len,n,b[501]={0};
char a[501]={'\0'};
scanf("%d",&n);
getchar();
gets(a);
len=strlen(a);
for(i=0;i<len;i++)
{	for(k=i;k<len-n+1;k++)
	{t=0;
		for(j=0;j<n;j++)
		{	if(a[i+j]!=a[k+j])
			t=1;
		}
	if(!t)
		b[i]++;
	}
}
for(i=0;i<len-n+1;i++)
	if(b[i]>max)
		max=b[i];

t=0;
for(i=0;i<len-n+1;i++)
	if(b[i]>1)
	{t=1;
	break;
	}
if(!t)
	{printf("NO");
	return;
	}
printf("%d\n",max);
for(i=0;i<len-n+1;i++)
	if(b[i]==max)
	{	for(j=0;j<n;j++)
		{printf("%c",a[i+j]);
		}
	printf("\n");
	}
}