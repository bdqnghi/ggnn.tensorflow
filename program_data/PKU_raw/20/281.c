char* findmax (char *p)
{
	char *max;
	for (max=p;*p!='\0';p++)
		if (*p>*max)
			max=p;
	return max;
}

void insert (char *op, char *sp)
{
	char * np;
	np=(char *)malloc(1000);
	char *t = np;
	char *temp;
	char * temp2;
 // printf("%c",*findmax(op));
	for (temp=op;*temp!=*findmax(op);temp++,np++)
		*np= *temp;
	temp2 = temp;
	*np =  *temp;
	np++;

	for (temp=sp;*sp!='\0';np++,sp++)
		*np = *sp;

	for (temp=temp2+1;*temp!='\0';np++,temp++)
		*np= *temp;

	*np='\0';
	while(*t!='\0') {
		printf("%c",*t);
		t++;
	}
  // printf("%c",'\0');
   printf("\n"); 
}

void main ()
{
	char ori[10], sub[3], newstr[13];
	char * orip = ori, * subp = sub, *newstrp=newstr;
	while (
		scanf ("%s %s", ori, sub)!=EOF)
	{
	
	 insert(orip,subp);
	//	printf ("%s\n", newstrp);
	}
}

