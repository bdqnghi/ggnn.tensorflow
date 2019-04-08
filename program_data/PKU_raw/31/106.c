struct student
{
  char str[1000];
  struct student *next;
};
void main()
{
  struct student a[1000],*p,*head;
  int i,j,t;
  for(i=0;;i++)
  {
	gets(a[i].str);

	
	if(a[i].str[0]=='e')
	break;
  }
  for(j=i-1;j>=0;j--)
  {
	 head=&a[i-1];   /*???a[i-1]???a[i]????????*/
	 a[j].next=&a[j-1];  /*????????end*/
	 a[0].next=NULL;
  }

  
  p=head;
  do
  {
	  printf("%s\n",p->str);
	  p=p->next ;
  } while(p!=NULL);
}
  