

struct shu
{
	int haoma;
	char b[26];
	struct shu *next;
};

int main()
{
	int n,i,a[26],c[26][100],max;
	int *s,(*q)[100];
	s=a;
	q=c;
	char m[26];
	struct shu *head,*p;
	for(i=0;i<26;i++)
		a[i]=0;
	scanf("%d",&n);
     head=(struct shu *)malloc(n*sizeof(shu));
	 p=head;
	 for(i=0;i<n-1;i++)
	 {
		 (p+i)->next=p+i+1;
	 }
	 (p+n-1)->next=0;
	 p=head;
	 for(;p!=0;)
	 {
		 scanf("%d %s",&p->haoma,p->b);
		strcpy(m,p->b);
		 for(i=0;*(m+i)!='\0';i++)
		 {
			 *(*(q+*(m+i)-65)+*(s+*(m+i)-65))=p->haoma;
			 //c[m[i]-65][a[m[i]-65]]=p->haoma;
			 *(s+*(m+i)-65)+=1;
			 //a[m[i]-65]++;			
		 }
		 p=p->next;
	 }
	 max=0;
	 for(i=0;i<26;i++)
		 if(*(a+i)>max)
		 {
			 max=*(a+i);
			 n=i;
		 }
	 printf("%c\n",n+65);
	 printf("%d\n",*(a+n));
	 for(i=0;i<*(a+n);i++)
	 {
		 printf("%d\n",*(*(q+n)+i));
	 }
	 
}