struct stu* create();
struct stu{
		char text[100];
		struct stu *prev;
	};
int main()
{
	struct stu *p;
	p=create();
	while (p){
         printf("%s\n", p->text);
         p = p->prev;
   }
	return 0;
}	

struct stu* create(){
	struct stu *p1,*p2,*start;
	p1 = (struct stu *)malloc(sizeof(struct stu));
    gets(p1->text);
    if (p1->text == "end" ){   
		free(p1);
        start = NULL;
        return start;  //?????
     }
	else{
		p1->prev = NULL;
		start = p1;
		p2 = p1;
		do{  
			p1 = (struct stu *)malloc(sizeof(struct stu));
			start=p2;
			gets(p1->text);
			if ( strcmp(p1->text,"end")==0 ){ 
				free(p1);
				break;
			}
			else{
				p1->prev = p2;
				p2 = p1;
			}
		}	while (1);
		return start;   //?????
	}
}