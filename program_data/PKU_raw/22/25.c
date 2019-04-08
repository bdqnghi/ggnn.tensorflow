void main()
{
int i,j,a[400],max=0,min=-1;
char c[400];
for(i=0;;i++)
	{scanf("%d",&a[i]);
		for(j=0;;j++)
			{c[j]=getchar();
			if (c[j]==',') break;
			if (c[j]==10) goto abc;
			}
	}
abc:;
for(j=0;j<=i;j++)
{if(a[j]>max) max=a[j];}
for(j=0;j<=i;j++)
if(a[j]==max) a[j]=-2;
for(j=0;j<=i;j++)
if(a[j]>min) min=a[j];
if (min==-1) printf("No");
else printf("%d",min);

}