int main()
{
	char c[2000]={0};
	gets(c);
	int a[201][2]={0};
    int i,j,k,l,p1,q1,q2,p2;
	i=0;
	j=0;
	l=strlen(c);
	k=0;
	p1=0;q1=0;
	p2=0;q2=19000;
//	printf("%d\n",l);
	while(j<l)
	{
		for (i=j;i<l;i=i+1)
		{if ((c[i]!=' ')&&(c[i]!=',')) break;}
			for (j=i;j<l;j=j+1)
			{	if ((c[j]==' ')||(c[j]==',')) break;}
			if ((j-i)>(q1-p1)) 
			{
				p1=i;
				q1=j;
			}
			if ((j-i)<(q2-p2)) 
			{
				p2=i;
				q2=j;
			}
		
	}
 
  for (i=p1;i<q1;i=i+1) printf("%c",c[i]);
  printf("\n");
  for (i=p2;i<q2;i=i+1) printf("%c",c[i]);
  return 0;
}