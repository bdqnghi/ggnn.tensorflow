int main()
{
	char name[1000][1000],leader,west,tem[1000];
	int n,i,all=0,j,a,b,t,money[5],sum[1000],paper;
      scanf("%d",&n);
	  for(i=0;i<n;i++)
	  {
		  scanf("%s %d %d %c %c %d",name[i],&a,&b,&leader,&west,&paper);
          if(a>80&&paper>0)money[0]=8000;else money[0]=0;
		  if(a>85&&b>80)money[1]=4000;else money[1]=0;
		  if(a>90)money[2]=2000;else money[2]=0;
		  if(a>85&&west=='Y')money[3]=1000;else money[3]=0;
		  if(b>80&&leader=='Y')money[4]=850;else money[4]=0;
		  sum[i]=money[0]+money[1]+money[2]+money[3]+money[4];
	  }
	  for(i=0;i<n;i++)
		  all+=sum[i];
	  for(j=0;j<n-1;j++)
		  for(i=0;i<n-1-j;i++)
			  if(sum[i]<sum[i+1])
			  {
				   t=sum[i];
				   sum[i]=sum[i+1];
				   sum[i+1]=t;
                   strcpy(tem,name[i]);
				   strcpy(name[i],name[i+1]);
				   strcpy(name[i+1],tem);
			  }
			  printf("%s\n%d\n%d",name[0],sum[0],all);


			return 0;
			
}
