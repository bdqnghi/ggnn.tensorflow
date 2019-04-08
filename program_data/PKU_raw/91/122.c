void main()
{char *p,x[101],fir;
 gets(x);
 fir=x[0];
 for(p=x;*(p+1)!='\0';p++)
	 *p=*p+*(p+1);
 *p=*p+fir;
 printf("%s",x);
}