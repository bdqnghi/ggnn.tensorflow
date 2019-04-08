int main()
{
  long int a,b,c,s,i,j,n,d[1000];
  char t[10000];
     scanf("%d%s%d",&a,&t,&b);
     s=0;c=1;
	 n=strlen(t);
	 for(i=n-1;i>=0;i--)
	 { if (t[i]>='a'&&t[i]<='z') s=s+c*(t[i]-87);
	 if (t[i]>='A'&&t[i]<='Z') s=s+c*(t[i]-55);
	 if (t[i]>='0'&&t[i]<='9') s=s+c*(t[i]-'0');
	 c=c*a;
	 }
	 i=0; 
	 	 if (s==0) printf("%d",s);
	 while(s!=0)
	 { if ((s%b)>9) d[i]=s%b+55;
	   else d[i]=s%b;
	 i++;
	 s=s/b;
	 }
	for (j=i-1;j>=0;j--)
	{ if (d[j]>=0&&d[j]<=9) printf("%d",d[j]);
	  if  (d[j]>=65&&d[j]<=90) printf("%c",d[j]);
	}
}
	 
 