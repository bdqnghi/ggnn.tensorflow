struct patient{
	char id[10];
	int age;
}pat[100],order[100],buffer[100],swap;

int main (){

	int i,j=0,m=0,n,k,p,q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf ("%s%d",pat[i].id,&pat[i].age);
	}
	for(i=0;i<n;i++){
		if (pat[i].age>=60){
			order[j]=pat[i];
			j++;}
		}
	for(i=0;i<n;i++){
		if (pat[i].age<60){
		    buffer[m]=pat[i];
			m++;}
		}
		
	for(p=1;p<j;p++){
		for(q=0;q<j-p;q++){
					if (order[q].age<order[q+1].age){
						swap=order[q+1];
						order[q+1]=order[q];
						order[q]=swap;
					}
				}
			}
			for(q=0;q<j;q++){
			printf("%s",order[q].id);
			printf ("\n");}
			for(i=0;i<m;i++){
			printf("%s",buffer[i].id);
         	printf("\n");}

		}
		
		