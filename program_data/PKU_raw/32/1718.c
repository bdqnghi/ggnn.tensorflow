void subtract(char a[],char b[],char c[])
{int i,carry=0;
 for(i=100;i>=0;i--)
 {if(b[i]+carry>a[i])
	{c[i]=10+a[i]-b[i]-carry+'0';
     carry=1;}
  else
	{c[i]=a[i]-b[i]-carry+'0';
	 carry=0;}
}
}

void align(char a[])
{int len,jump,m;
 len=strlen(a);
 jump=101-len;
for(m=len;m>=0;m--)
 {a[m+jump]=a[m];
  a[m]='0';}
}

void main()
{int i,x,y,z,m;
scanf("%d",&m);
while(m>0)
{char e[101],f[101],g[101];
 for(i=0;i<101;i++)
 e[i]=f[i]=g[i]='0';
 scanf("%s",e);
 scanf("%s",f);
 x=strlen(e);
 y=strlen(f);
 align(e);
 align(f);
 subtract(e,f,g);
 z=100-x;
 while(z<=99&&g[z]=='0')
 z++;
 for(i=z;i<=100;i++)
 printf("%c",g[i]);
 printf("\n");
 m=m-1;
 getchar();
}
}
