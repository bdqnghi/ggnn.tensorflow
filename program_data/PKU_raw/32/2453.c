void main()
{int n,i,l,al,bl;
char a[101],b[101];
scanf("%d",&n);
l=n;
while(l>0)
{scanf("%s",&a);
 scanf("%s",&b);
 al=strlen(a);
 bl=strlen(b);
 for(i=100;i>=101-al;i--)
	 a[i]=a[i-101+al]-48;
 for(i=100;i>=101-bl;i--)
	 b[i]=b[i-101+bl]-48;
 for(i=0;i<=100-al;i++)
	 a[i]=0;
 for(i=0;i<=100-bl;i++)
	 b[i]=0;
 for(i=100;i>=101-al;i--)
	{a[i]=a[i]-b[i];
		if(a[i]<0)
		{a[i]=a[i]+10;
		 a[i-1]=a[i-1]-1;
		}
	}
 if(a[101-al]!=0)
	 printf("%d",a[101-al]);
 for(i=102-al;i<=100;i++)
 printf("%d",a[i]);
 printf("\n");
 l--;
}
}