  
 int main()
 {
	 int n,i,summoney=0;
     scanf("%d",&n);
     struct data{
     char name[50];
     int grade,classgrade,papers;
     char monitor,west;
     int money;
	 }*number;
     number=(struct data *)malloc(sizeof(data)*n);
     for (i=0;i<n;i++)
	 {
		 scanf("%s %d %d %c %c %d",number[i].name,&number[i].grade,&number[i].classgrade,&number[i].monitor,&number[i].west,&number[i].papers);
		 number[i].money=0;
         if (number[i].grade>80&&number[i].papers>=1)number[i].money+=8000;
         if (number[i].grade>85&&number[i].classgrade>80)number[i].money+=4000;
         if (number[i].grade>90)number[i].money+=2000;
         if (number[i].grade>85&&number[i].west=='Y')number[i].money+=1000;
         if (number[i].classgrade>80&&number[i].monitor=='Y')number[i].money+=850;
         summoney+=number[i].money;
	 }
     int a,k;
     a=number[n-1].money;
     k=0;
     for (i=n-1;i>0;i--)
	 {
		 if (a>number[i-1].money)a=a;
		 else 
		 {
			 a=number[i-1].money;
			 k=i-1;
		 }
	 }
     printf("%s\n%d\n%d\n",number[k].name,number[k].money,summoney);
	 return 0;
 }