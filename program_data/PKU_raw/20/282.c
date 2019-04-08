
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
  	for (;*op!=*findmax(op);op++)
		printf ("%c", *op);
	printf ("%c", *op);

	for (;*sp!='\0';sp++)
		printf ("%c", *sp);

	for (op++;*op!='\0';op++)
		printf ("%c", *op);

	printf ("\n");
}

void main ()
{
	char ori[10], sub[3], newstr[13];
	char * orip = ori, * subp = sub, *newstrp=newstr;

	while (scanf ("%s %s", ori, sub)!=EOF)	
		insert(orip,subp);	
}

