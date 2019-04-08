int main(int argc, char* argv[])
{
	char s[10];
	int a, b;
	scanf("%d %s %d",&a,s,&b);
	int i,sum=0,d;
	d=strlen(s);
	for(i=0;i<d;i++){
		if(s[i]>47&&s[i]<58)
			sum=sum*a+(s[i]-48);
		if(s[i]>64&&s[i]<91)
			sum=sum*a+(s[i]-55);
		if(s[i]>96&&s[i]<123)
			sum=sum*a+(s[i]-87);
	}
	char ss[20];
	int c,e=0;
	for(i=0;;i++){
		c=sum%b;
		sum=sum/b;
		if(c>=0&&c<10)
			ss[i]=c+48;
		if(c>9&&c<36)
			ss[i]=c+55;
		e++;
		if(sum==0)
			break;
	}
	for(i=e;i>0;i--)
		printf("%c",ss[i-1]);
	return 0;
}