struct book
{
  char num[500];
  char s[50];
  struct book *next;
};
void main()
{
  struct book *head;
  struct book *p1,*p2;
  int m,mi,i,j,k,max,found;
  int aut[26]={0};
  scanf("%d",&m);
  p1=(struct book*)malloc(LEN);
  scanf("%s %s",p1->num,p1->s);
  for(i=0;i<strlen(p1->s);i++)
	  aut[(p1->s)[i]-'A']++;
  p1->next=NULL;

  head=p2=p1;

  for(mi=2;mi<=m;mi++)
  {
    p1=(struct book*)malloc(LEN);
    scanf("%s %s",p1->num,p1->s);
    for(i=0;i<strlen(p1->s);i++)
	  aut[(p1->s)[i]-'A']++;

	p2->next=p1;
	p2=p1;
  }
  p2->next=NULL;

  max=0;
  for(i=0;i<26;i++)
	  if(aut[i]>max)
	  {
        k=i;
		max=aut[i];
	  }

  printf("%c\n",k+65);
  printf("%d\n",aut[k]);

  p1=head;
  for(i=1;i<=m;i++)
  {
    found=0;
	for(j=0;j<strlen(p1->s);j++)
		if((p1->s)[j]==k+65)
		{
          found=1;
		  break;
		}
	if(found==1) printf("%s\n",p1->num);
	p1=p1->next;
  }
}