int main()
{
    char a[501],b[501];
	int i,j=0;
	double x,y,z;
	scanf("%lf",&x);
    scanf("%s",a);
    scanf("%s",b);
	y=strlen(b);
	for(i=0;a[i]!='\0';i++)
	{
	     if(strlen(a)!=strlen(b))
		 {
		      printf("error");
			  break;
		 }
         if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
		 {
			 printf("error");
			 break;
		 }
		 if(a[i]==b[i])
		 {
			 j++;
		 }
		 if(a[i+1]=='\0')
		 {
			 z=j/y;
             if(z>x){printf("yes");}else{printf("no");}
		 }
	}
    return 0;
}
