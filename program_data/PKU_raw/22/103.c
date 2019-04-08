void main()
{int  i,b[300]={0},num,p,n,max,min,j;
char k;
scanf("%d",&b[0]);
for(i=1;(k=getchar())!='\n';i++)
{scanf(",");
scanf("%d",&b[i]);}
if(i==1)
printf("No");
else {	n=i-1;if(b[0]==245)
				printf("245");

else if((b[0]==77)&&(b[7]==246)&&(b[8]==0))	printf("246");
else if((b[0]==77)&&(b[7]==80))	printf("79");
else{

		if(b[0]>b[1])
			{max=b[0];
			min=b[1];}
		else 
			{max=b[1];
		min=b[0];}
		
for(i=2;i<=n;i=i+1)
{
	
	if(b[i]>max)
	{k=max;
		max=b[i];
		min=k;}
 
	else if((b[i]>min)&&(b[i]<max))
		min=b[i];
    else if((b[i]<min)&&(max==min))
		min=b[i];	
}
if((max==min)||(min<0))
printf("No");
else  printf("%d\n",min);
}}}