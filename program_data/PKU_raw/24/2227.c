int main()
{char c[5000]={' '};
 int i,j,k=0,l,n,m,lg=0,st=5000;
 char *chang,*duan,*tp;
 tp=c;
gets(c);
l=strlen(c);
c[l]=' ';
c[l+1]=0;
for (i=0;i<=l;i++)
{ if ((c[i]!=' ')&&(c[i]!=',')) k++;
else if (k>0) { if (k>lg) {lg=k;chang=tp;}
		if (k<st) {st=k;duan=tp;}
		tp=c+i+1;
		k=0;
	}
}
for (i=0;i<lg;i++)
{putchar(*chang);
 chang++;
}
printf("\n");
for (i=0;i<st;i++)
{putchar(*duan);
 duan++;
}
return 7;
}
