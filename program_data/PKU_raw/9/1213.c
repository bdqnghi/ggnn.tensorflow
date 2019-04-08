
int main(){
	struct patient{
		char id[11];
		int age;
	} patients[100],old[100],young[100],jh;
	int n,i,j,d,k;
        j=-1;
		d=-1;
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%s %d",patients[i].id,&patients[i].age);
	}
    for(i=0;i<n;i++){
		if(patients[i].age>=60){
             d++;
			old[d]=patients[i];		

			}else{
             j++;
			young[j]=patients[i];
			}
	}
	for(k=1;k<=d+1;k++){
     for(i=0;i<d;i++){
		 if(old[i].age<old[i+1].age){
             jh=old[i];
             old[i]=old[i+1];
             old[i+1]=jh;
		 }
	 }
	}
   for(i=0;i<=d;i++){
        printf("%s\n",old[i].id);
   }
   for(i=0;i<=j;i++){
         printf("%s\n",young[i].id);
   }
return 0;
}
