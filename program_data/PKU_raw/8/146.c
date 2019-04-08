
void f(int str[],int m)
{int i,j,k;
	for(j=0;j<m;j++)
	for(i=0;i<m-1;i++)
		if(str[i]>str[i+1])
		{k=str[i];
		str[i]=str[i+1];
		str[i+1]=k;}
}

void g(int a[],int b[],int ma,int mb)
{int i;
	for(i=ma;i<(ma+mb);i++)
a[i]=b[i-ma];
}


void main()
{int ma,mb,i;
int a[8888],b[8888];
scanf("%d %d",&ma,&mb);
for(i=0;i<ma;i++)
scanf("%d",&a[i]);
for(i=0;i<mb;i++)
scanf("%d",&b[i]);
f(a,ma);
f(b,mb);
g(a,b,ma,mb);
for(i=0;i<=(ma+mb-1);i++)
{if(i!=0)
printf(" ");
printf("%d",a[i]);}
}
