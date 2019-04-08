int dx(char c)
{if ((c>='A')&&(c<='Z')) return 7;
 else return 0;
}
int xx(char c)
{if ((c>='a')&&(c<='z')) return 7;
 else return 0;
}
int xhx(char c)
{if (c=='_') return 7;
 else return 0;
}
int num(char c)
{if ((c>='0')&&(c<='9')) return 7;
 else return 0;
}
int head(char c)
{return dx(c)+xx(c)+xhx(c);}
int body(char c)
{return dx(c)+xx(c)+xhx(c)+num(c);}
int main()
{int i,j,k,l,flag=7;
 char c[1000]={' '};
 scanf("%d\n",&k);
 for (j=0;j<k;j++)
 {	scanf("%s",c);
	if (head(c[0])==0) printf("no");
	 else {for (i=strlen(c)-1;i>0;i--)
			    if (body(c[i])==0) flag=0;
		   if (flag==7) printf("yes");
		   if (flag==0) printf("no");
		   flag=7;
		   }
	 putchar(10);
 }
 return 7;
}