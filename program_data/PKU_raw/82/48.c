
int main(int argc, char* argv[])
{	
	int a[100],b[100],c[100];
	int i,n,h,e;
	scanf("%d\n",&n);
         for(i=0;i<100;i++)
             {a[i]=0;
             b[i]=0;
             c[i]=0;}
	for(i=0,c[-1]=0;i<n;i++)
	{scanf("%d %d",&a[i],&b[i]);
	if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		c[i]=c[i-1]+1;
	else
		c[i]=c[i-1]*0;
	}
	for(e=0;e<n;e++)
		for(i=0;i<n-e;i++)
			if(c[i]<c[i+1])
			{h=c[i];
			 c[i]=c[i+1];
			 c[i+1]=h;
			}
	printf("%d\n",c[0]);
	return 0;
}

