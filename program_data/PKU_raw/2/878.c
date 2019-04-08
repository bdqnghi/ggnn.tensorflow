struct book{
	int num;
	char writer[26];
	struct book *next;
};
void main()
{
	int n,i,j,a[26]={0},max,temp;                 /*a[i]???????0*/
	char c;
	struct book *p,*head,*tail;
	scanf("%d",&n);
	head=NULL;tail=NULL;
	for(i=0;i<n;i++){
		p=(struct book*)malloc(len);
		scanf("%d %s",&p->num,p->writer);
		if(head==NULL)                              /*???????????=??????????????????*/
			head=tail=p;
		else{
			tail->next=p;
			tail=p;
		}
	}
	for(c='A';c<='Z';c++){
		for(i=0,p=head;i<n;i++,p=p->next)
		{
			for(j=0;p->writer[j]!='\0';j++)
				if(p->writer[j]==c)    
					a[c-'A']++;                     /*????break,??????*/
		}	                                        /*??a[26]????????????????????????????????????????????????????????????*/
	}
	max=a[0];
	for(i=0;i<26;i++)
		if(a[i]>max)
			max=a[i];                                
	for(i=0;i<26;i++)
		if(a[i]==max)
			break;
	c=i+'A';
	printf("%c\n",c);
	printf("%d\n",a[i]);                              
	for(i=0,p=head;i<n;i++,p=p->next)
		{
			for(j=0;p->writer[j]!='\0';j++)                   
				if(p->writer[j]==c){
					printf("%d\n",p->num);break;
				}
		}
}