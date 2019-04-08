int main()
{
 int A,B,C,D,E,i1,i2,i3,i4,a[100];
 for(i1=1;i1<=5;i1++)
 {
	 A=i1;
	 for(i2=1;i2<=5;i2++)
	 {
		 if(i2!=i1)
		 {
			 B=i2;
		 for(i3=1;i3<=5;i3++)
		 {
			 if(i3!=i1&&i3!=i2)
			 {
				 C=i3;
				 for(i4=1;i4<=5;i4++)
				 {
					 if(i4!=i1&&i4!=i2&&i4!=i3)
					 {
						 D=i4;
						 E=15-A-B-C-D;
						 a[A]=(E==1);
						 a[B]=(B==2);
						 a[C]=(A==5);
						 a[D]=(C!=1);
						 a[E]=(D==1);
						 if(a[A]+a[B]+a[C]+a[D]+a[E]==2&&a[1]==1&&a[2]==1&&E!=2&&E!=3)
							 cout << A <<" " << B <<" "<< C <<" "<< D <<" "<< E <<endl;
					 }
				 }
			 }
		 }
		 }
	 }
 }
		 return 0;
}
