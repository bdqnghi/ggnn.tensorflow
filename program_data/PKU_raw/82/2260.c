int main()
{
 int a,b,max=0,t=0,n,i;
 scanf("%d",&n);
 for(i=1;i<n;i++){
	scanf("%d %d",&a,&b);
	if(a>=90&&a<=140&&b>=60&&b<=90){t++;}
	else{
		if(t>=max){max=t;}
		t=0;
	}
	}
 scanf("%d %d",&a,&b);
 if(a>=90&&a<=140&&b>=60&&b<=90){t++;}
 if(t>=max){max=t;}
  printf("%d",max);
 return 0;
}
