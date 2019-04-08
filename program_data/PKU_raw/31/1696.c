struct Student{
	char stu[100];
	struct Student *next;
};
int main()
{
	struct Student *p,*head,*p1,*p2;
	int n = 0;
	p2 = p1 = (struct Student *)malloc(Len); 
	head = NULL;
	gets(p1->stu);
	while(strcmp(p1->stu,"end")!=0){
		n++;
		head = p1;
		if (n==1) p1->next = NULL; 
		else{
			p1->next = p2;
		    p2 = p1;
		}
		    p1 = (struct Student *)malloc(Len);
		    gets(p1->stu); 
	}
    
    p = head;
    if (head != NULL){
		do{
			puts(p->stu);
			p=p->next;
		}while(p != NULL);
	}
	
	return 0;
}
