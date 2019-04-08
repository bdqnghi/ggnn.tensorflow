int main()
{
	char z[101]={'0'};
	char s[101]={'0'};
	char c;
	int   i,n;
gets(z);
n=strlen(z);
c=z[0]+z[n-1];
for(i=0;i<n;i++){
	s[i]=z[i]+z[i+1];
	
}
s[n-1]=c;	
printf("%s\n",s);
return 0;
}




