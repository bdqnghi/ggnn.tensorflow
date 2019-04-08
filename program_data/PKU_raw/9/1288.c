struct patient
{	char id[11];
	int age;
};

int main()
{	struct patient pt[100];

	int n,i,j,a=0,b=0,tem;
	int age_r[100],time_range[100];
	char temid[11];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d",pt[i].id,&pt[i].age);
		if(pt[i].age>=60){
			age_r[a]=i;
			a++;
		}
		else{
			time_range[b]=i;
			b++;
		}
	}
	for(i=1;i<a-1;i++){
		for(j=0;j<a-i;j++){
			if(pt[age_r[j]].age<pt[age_r[j+1]].age){   //?????????????? ???debug?????????
				strcpy(temid,pt[age_r[j]].id);
				strcpy(pt[age_r[j]].id,pt[age_r[j+1]].id);
				strcpy(pt[age_r[j+1]].id,temid);
				tem=pt[age_r[j]].age;
				pt[age_r[j]].age=pt[age_r[j+1]].age;
				pt[age_r[j+1]].age=tem;

			}
		}

	}
	for(i=0;i<a;i++){
		printf("%s\n",pt[age_r[i]].id);
	}
	for(i=0;i<b;i++){
		printf("%s\n",pt[time_range[i]].id);
	}

	return 0;
}
