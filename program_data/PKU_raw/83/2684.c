float jidian(int x)
{if(x>=90&&x<=100) return 4.0; 
else if(x>=85&&x<=89)  return 3.7; 
else if(x>=82&&x<=84)  return 3.3;  
else if(x>=78&&x<=81)  return 3.0;  
else if(x>=75&&x<=77)  return 2.7;  
else if(x>=72&&x<=74)  return 2.3;  
else if(x>=68&&x<=71)  return 2.0;  
else if(x>=64&&x<=67)  return 1.5;  
else if(x>=60&&x<=63)  return 1.0;  
else return 0; 
}
int main()
{
	int i,n,xuefen[10],fenshu[10],sum1=0;
	float sum2=0,GPA;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&xuefen[i]);
	for(i=0;i<n;i++)
		scanf("%d",&fenshu[i]);
	for(i=0;i<n;i++)
	{sum1=sum1+xuefen[i];
	 sum2=sum2+((float)xuefen[i])*(jidian(fenshu[i]));}
	GPA=((float)sum2)/sum1;
	printf("%.2f\n",GPA);
	return 0;
}
