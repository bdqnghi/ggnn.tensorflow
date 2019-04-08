int main()
{
	int n,y,a[13],p,q,i,b,sum=0,c,temp=0;
	a[1]=31;a[3]=31;a[4]=30;a[5]=31;a[6]=30;a[7]=31;a[8]=31;a[9]=30;a[10]=31;a[11]=30;a[12]=31;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 scanf("%d%d%d",&y,&p,&q);
		 if (y%4==0 && y%100!=0 || y%400==0)
		 {
			 a[2]=29;
			 if(p>q)
			 {
				 for(b=q;b<p;b++){sum+=a[b];};}
			 else {for(b=p;b<q;b++){sum+=a[b];};}
			 if(sum%7==0)
			 {
				 printf("YES\n");
			 }
			 else printf("NO\n");sum=0;
		 }
		 else
		 {
			 a[2]=28;
			 if(p>q)
			 {
				 for(c=q;c<p;c++){temp+=a[c];};}
			 else {for(c=p;c<q;c++){temp+=a[c];};}
			 if(temp%7==0)
			 {
				 printf("YES\n");
			 }
			 else printf("NO\n");temp=0;
		 }
	} 
	return 0;
}