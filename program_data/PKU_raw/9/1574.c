void main(){
	struct br{
	      char id[10];
		  int age;
	}br[100], lr[100], temp;
    
	int i, n, m, j;
    scanf("%d", &n);
    for(i=0, j=0; i<n;i++){
       scanf("%s %d", br[i].id, &br[i].age);
       if(br[i].age>=60){
		   lr[j]=br[i];
		   j++;
	   }
	}
    m=j;
	for(i=1;i<m;i++){
         for(j=1;j<=m-i;j++){
            if(lr[j].age>lr[j-1].age){
               temp=lr[j-1];
               lr[j-1]=lr[j];
               lr[j]=temp;
			}
		 }   
	 }
	for(i=0;i<m;i++)
		printf("%s\n",lr[i].id);
	for(i=0;i<n;i++)
		if(br[i].age<60)
		   printf("%s\n",br[i].id);
}