void main()
{
     int a,b=0,c=0,r=0;
	 scanf("%d",&a);
     if (a%3==0) b=3;
	 if (a%5==0) c=5;
	 if (a%7==0) r=7;
	 if (b>0) printf("3");
	 if (c>0&&b>0) printf(" 5");
	   else if(c>0) printf("5");
	 if (r>0&&(c>0||b>0)) printf(" 7");
	    else if (r>0) printf("7");
     if(b==0&&c==0&&r==0) printf("n");
}


	 
