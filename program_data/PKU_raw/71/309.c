int main()
{
	int i,n,a[3],b[13];
    b[0]=0;b[1]=31;b[2]=59;b[3]=90;b[4]=120;b[5]=151;b[6]=181;b[7]=212;b[8]=243;b[9]=273,b[10]=304;b[11]=334;b[12]=365;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 scanf("%d%d%d",&a[0],&a[1],&a[2]);
		 if((a[0]%100!=0&&a[0]%4==0)||(a[0]%400==0))
		 {
			 if(a[1]>2&&(b[a[2]-1]-b[a[1]-1])%7==0&&a[2]>2)
                  printf("YES\n");
			 else if(a[1]<3&&(b[a[2]-1]-b[a[1]-1]+1)%7==0&&a[2]>=3)
                  printf("YES\n");
			 else if((b[a[2]-1]-b[a[1]-1])%7==0&&a[1]<3&&a[2]<3)
				 printf("YES\n");
			 else if(a[2]<3&&(b[a[1]-1]-b[a[2]-1]+1)%7==0&&a[1]>=3)
				 printf("YES\n");
			 else
				 printf("NO\n");
		 }
		 else
		 {
			  if((b[a[2]-1]-b[a[1]-1])%7==0)
                  printf("YES\n");
		 else
				 printf("NO\n");
		 }
	}	
	return 0;
}
