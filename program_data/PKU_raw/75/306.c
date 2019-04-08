int main()
{
	int in[1002],out[1002],time[1002]={0};
	int temp,i,j,k,num;
	char space;
	for(i=0;;i++)
	{
		scanf("%d%c",&temp,&space);
		in[i]=temp;
		if(space!=',') break;
	}
	num=i+1;
	for(i=0;;i++)
	{
		scanf("%d%c",&temp,&space);
		out[i]=temp;
		if(space!=',') break;
	}
	for(i=0;i<num;i++){
		for(j=in[i];j<out[i];j++){
			time[j]++;
		}
	}
	int max=0;
	for(i=0;i<=1001;i++){
		if(time[i]>max)
			max=time[i];
	}
	printf("%d %d",num,max);		  
}




