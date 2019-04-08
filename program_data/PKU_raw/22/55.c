int MAX(int a[],int k)
{	int i,j,max=0;
	for(i=0;i<k;i++)
	{if(a[i]>max)
	{j=i;max=a[i];
	}
	}
	return(max);
}
int nexttomax(int a[],int k,int m)
{	int i,j,max=0;
	for(i=0;i<k;i++)
	{if((a[i]>max)&&(a[i]!=m))
	{j=i;max=a[i];
	}
	}
	return(max);
}
int check(int x)
{	int i,p=1;
	for(i=2;i<x;i++)
		if(x%i==0)
		{p=0;break;
		}
	return(p);
}
int checkstr(int a[],int k)
{	int i,p=0;
	for(i=1;i<k;i++)
	if(a[i]!=a[0]) 
	{p=1;break;}
	return(p);
}
int tongji(char str[])
{	int i=0,count=0;
	while(str[i]!='\0')
	{if(str[i]==',') count++;
	i++;
	}
	return(count);
}
int convertor(char str[],int start,int end)
{	int i,r=str[start]-'0';
	for(i=start+1;i<end;i++)
	r=r*10+(str[i]-'0');
	return(r);
}
void main()
{	int i,j=0,k=0,n,flag=1,fw;
	char str[N];
	int num[300];
	gets(str);
	n=tongji(str)+1;
	if(n==1) printf("No");
	else
	{for(i=0;i<strlen(str);i++)
	if(str[i]==',')
		{num[k++]=convertor(str,j,i);
		j=i+1;
		}
		num[k++]=convertor(str,j,i);
	if(checkstr(num,k)==0&&n!=1) printf("No");
	else
	{fw=MAX(num,k);
	printf("%d",nexttomax(num,k,fw));
	}
	}
}