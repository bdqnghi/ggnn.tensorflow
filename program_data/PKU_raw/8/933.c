int n1,n2;
int num1[100],num2[100];
int out[200];
//????
void p1(void)
{
	int i;
	
	scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++){
		scanf("%d",&num1[i]);
	}
	for(i=0;i<n2;i++){
		scanf("%d",&num2[i]);
	}
}
//??????
void p2(int num1[100],int num2[100],int n1,int n2)
{
	int i,j,tmp;
	//????????
	for(i=0;i<n1;i++){
		for(j=i+1;j<n1;j++){
			if(num1[j]<num1[i]){
				tmp=num1[j];
				num1[j]=num1[i];
				num1[i]=tmp;
			}
		}
	}
    //??????
	for(i=0;i<n2;i++){
		for(j=i+1;j<n2;j++){
			if(num2[j]<num2[i]){
				tmp=num2[j];
				num2[j]=num2[i];
				num2[i]=tmp;
			}
		}
	}
}
//?????? ?????????
void p3(int num1[100],int num2[100],int n1,int n2)
{
	
	int i=0,j=0;
    while(i<n1){
		out[i]=num1[i];
		i++;
	}
	while(j<n2){
		out[n1+j]=num2[j];
		j++;
	}
}
//??
void p4(int out[200],int n)
{
	int i;
	printf("%d",out[0]);
	for(i=1;i<n;i++){
		printf(" %d",out[i]);
	}
}
int main()
{
	p1();
	p2(num1,num2,n1,n2);
	p3(num1,num2,n1,n2);
	p4(out,n1+n2);
	return 0;
}



