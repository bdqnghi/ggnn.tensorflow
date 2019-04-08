
void main(){
	int date[365];
	int month[13];
	int primary,i;
	scanf("%d",&primary);
	for (i=0;i<=365;i++)
		date[i]=((i+primary)%7);
	if (date[12]==5) month[1]=1;
	if (date[43]==5) month[2]=1;
	if (date[71]==5) month[3]=1;
	if (date[102]==5) month[4]=1;
	if (date[132]==5) month[5]=1;
	if (date[163]==5) month[6]=1;
	if (date[193]==5) month[7]=1;
	if (date[224]==5) month[8]=1;
	if (date[255]==5) month[9]=1;
	if (date[285]==5) month[10]=1;
	if (date[316]==5) month[11]=1;
	if (date[346]==5) month[12]=1;
	for (i=1;i<=12;i++)
		if (month[i]==1) printf("%d\n",i);
}