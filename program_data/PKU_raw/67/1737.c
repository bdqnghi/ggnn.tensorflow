
int main()
{
int n;
scanf("%d",&n);
int i;
double sz[256],sz2[256] ;
double youxiao[256];
for(i=0;i<n;i+=1)
{scanf("%lf",&(sz[i]));
scanf("%lf",&(sz2[i]));						
youxiao[i]=sz2[i]/sz[i];}
for(i=1;i<n;i+=1)
{if(youxiao[i]-youxiao[0]>0.05){printf("better\n");}		
else if(youxiao[0]-youxiao[i]>0.05){printf("worse\n");}	
else {printf("same\n");}		
	}

 return 0;
}



