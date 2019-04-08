void factor(int,int);
int result[9999]={0};
int j=0;
int main()
{
	int times,k=1;
	cin>>times;
	while(k<=times){
	int num,ansf=0;
	cin>>num;
	factor(2,num);

	for(int i=0;i<9999;i++)
		if(result[i])ansf++;
	cout<<ansf<<endl;

	for(int i=0;i<9999;i++)
		result[i]=0;

	k++;
	}


	return 0;
}

void factor(int start,int num)
{  
  if(num==1)
     {result[j]=1;j++;}
   
   for(int i=start;i<=num;i++){
	   if(num%i==0)
		   factor(i,num/i);
     }
}

