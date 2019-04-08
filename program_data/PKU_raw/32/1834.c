int lena,lenb,lenc;
void minus(char a[],char b[],char c[])
{	int carry=0,i;
	for(i=lena-1;i>=0;i--)
	{if(a[i]-b[i]-carry<0)
		{c[i]=a[i]+10-b[i]+'0'-carry;
		carry=1;
		}
	else if(a[i]-b[i]-carry>=0)
		{c[i]=a[i]-b[i]+'0'-carry;
		carry=0;
		}
	}
	c[lena]='\0';
}
void operate(char b[])
{	int jump=lena-lenb;
	int i;
	b[lena]='\0';
	for(i=lenb;i>=0;--i)
		b[i+jump]=b[i];
	for(i=0;i<jump;i++)
		b[i]='0';
}
void main()
{	char a[ARRAY][N],b[ARRAY][N],c[N];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s",a[i]);
	scanf("%s",b[i]);
	printf("\n");
	}
	for(i=0;i<n;i++)
	{lena=strlen(a[i]);lenb=strlen(b[i]);
	operate(b[i]);
	minus(a[i],b[i],c);
	for(j=0;j<lena;j++)
		if(c[j]!='0') break;
	for(;j<lena;j++)
		printf("%c",c[j]);
	printf("\n");
	}
}