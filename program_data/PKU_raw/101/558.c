int main()
{
	int a,b,c,i1,i2,i3,i4,i5,i6,i7,i8,i9,i;
	char 	n[3];
	for(a=0;a<=2;a++)
		for(b=0;b<=2;b++)
			for(c=0;c<=2;c++)
			{
				i1=(b>a);
				i2=(a==c);
				i3=(a>b);
				i4=(a>c);
				i5=(c>b);
				i6=(b>a);
				i7=a+i1+i2;
				i8=b+i3+i4;
				i9=c+i5+i6;

     if (i7==2&&i8==2&&i9==2)
	 {
		 n[a]='A';
		 n[b]='B';
		 n[c]='C';
		 for(i=0;i<3;i++)
			 cout<<n[i];}



	 }
	 
		
			return 0;
}



		





