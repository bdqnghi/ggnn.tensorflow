void main()
{
	char *c;
	int n,i,s=0,p=0;
	c=(char*)malloc(30*sizeof(char));
	gets (c);
	n=strlen (c);
	for (i=0;i<n;i++)
	if (*(c+i)>=48&&*(c+i)<=57)  { s=s*10+(*(c+i)-48); p=1;}
    else if (p) {printf ("%d\n",s); s=0;p=0;}
	 if (p) printf ("%d\n",s);  
}