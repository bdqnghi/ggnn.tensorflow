
int pdshuzi(char zi)
{
    int zhi1;
	if(zi>='0'&&zi<='9')zhi1=1;
	else zhi1=0;
	return(zhi1);
}

int pdzimu(char zi)
{
	int zhi2;
	if((zi>='a'&&zi<='z')||(zi>='A'&&zi<='Z'))zhi2=1;
	  else zhi2=0;
	  return(zhi2);
}

int sort(char *head)
{
	char *t;
	int zhi,flag=1;
	t=head;
	if(pdzimu(*t)==1||*t=='_')zhi=1;
	else {zhi=0;return(zhi);}
 
	t++;
	for(;*t!='\0';t++)
	{if(pdzimu(*t)==1||pdshuzi(*t)==1||*t=='_')flag=1;
		  else flag=0;
		  if(flag==0){return(0);break;}}
	if(flag==1)return(1);

}

void main()
{
  char *name[100];
  char **p;
  int n,i;

  scanf("%d\n",&n);
  for(p=name,i=0;i<n;i++,p++)
	  *p=(char *)malloc(90*sizeof(char));

  for(p=name;p<name+n;p++)
	  gets(*p);

  for(p=name;p<name+n;p++)
	  printf("%d\n",sort(*p));
}