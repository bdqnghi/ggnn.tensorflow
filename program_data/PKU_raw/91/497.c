int main()
{char a[100],b[100];
 int i,j,n,m;
 gets(a);
 n=strlen(a);
 for(i=0;i<n;i++)
 {	if(i==n-1)
 	b[i]=a[i]+a[0];
 	else
	b[i]=a[i]+a[i+1];
 }
 b[n]='\0';
 printf("%s",b);
 return 0;
}