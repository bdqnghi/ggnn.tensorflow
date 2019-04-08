
struct person{
	char str[10];
	int age;
}per[100],per1[100],per2[100];

int main(int argc, char* argv[])
{
	int n,i,j=0,k=0,x=0,t;
	char e[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",per[i].str,&per[i].age);
		if(per[i].age>=60){
			strcpy(per1[j].str,per[i].str);
			per1[j].age=per[i].age;
			j++;
		}
		else{
			strcpy(per2[k].str,per[i].str);
			per2[k].age=per[i].age;
			k++;
		}
	}
	for(x=0;x<j;x++){
		for(i=0;i<j-x;i++){
			if(per1[i].age<per1[i+1].age){
				strcpy(e,per1[i].str);
				strcpy(per1[i].str,per1[i+1].str);
				strcpy(per1[i+1].str,e);
				t=per1[i].age;
				per1[i].age=per1[i+1].age;
				per1[i+1].age=t;
			}
		}
	}
	for(i=0;i<j;i++){
		printf("%s\n",per1[i].str);
	}
	for(i=0;i<k;i++){
		printf("%s\n",per2[i].str);
	}

	return 0;
}
