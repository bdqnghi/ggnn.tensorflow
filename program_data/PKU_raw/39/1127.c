int main(int argc, char* argv[])
{
	int n,s1,s2,paper,i,money[100],m=0,sum=0,a;
	char name[100][20],c1=0,c2=0;
     scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {  
		money[i]=0;
	    scanf("%s %d %d %c %c %d\n",name[i],&s1,&s2,&c1,&c2,&paper);
	    if(s1>80&&paper>=1)
		{
			money[i]=money[i]+8000;
		}
		if(s1>85&&s2>80)
		{
			money[i]=money[i]+4000;
		}
		if(s1>90)
		{
			money[i]=money[i]+2000;
		}
		if(s1>85&&c2=='Y')
		{
			money[i]=money[i]+1000;
		}
		if(s2>80&&c1=='Y')
		{
			money[i]=money[i]+850;
		}
        if(money[i]>m)
		{
			m=money[i];
			a=i;
		}
         sum=sum+money[i];
	 
	 }
      printf("%s\n%d\n%d",name[a],m,sum);

	return 0;
}
