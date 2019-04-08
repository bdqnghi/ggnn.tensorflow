int main()
{
	  int n,i,j;
	  float one=0,two=0,three=0,yi=0,er=0,san=0;
	  float a[100000][2];
	  scanf("%d",&n);
	  struct Student
	  {
		  float xuehao;
		  float yuwen;
		  float shuxue;
	  } student;
	  for (i=0;i<n;i++){
		  scanf("%f %f %f",&student.xuehao,&student.yuwen,&student.shuxue);
		  for (j=0;j<2;j++){
			  a[i][1]=student.yuwen+student.shuxue;  
	          a[i][0]=i+1;
		  }
	  }
	  for (i=0;i<n;i++){
          if (a[i][1]>one)
		  {		  one=a[i][1];
		  yi=a[i][0];  }
	  }
      for (i=0;i<n;i++){
          if (a[i][1]>two&&a[i][1]<=one&&a[i][0]!=yi)
		  {		  two=a[i][1];
		  er=a[i][0];  }
	  }
       for (i=0;i<n;i++){
          if (a[i][1]>three&&a[i][1]<=one&&a[i][1]<=two&&a[i][0]!=yi&&a[i][0]!=er)
		  {		  three=a[i][1];
		  san=a[i][0];  }
	  }
	   printf("%.0f %.0f\n",yi,one);
	   printf("%.0f %.0f\n",er,two);
	   printf("%.0f %.0f\n",san,three);
	   return 0;
}
