int main()
{
	int N,A,B,a;
	scanf("%d%d%d",&N,&A,&B);
	if(N%100!=0&&N%4==0||N%400==0)
	{
		 for(a=0,A=A-1;A!=0;A--)
		 {
			switch(A)
				{
				case 1:
				case 3:
      			case 5:
    			case 7:
				case 8:
				case 10:
				case 12:a+=31;
					break;
				case 2:a+=29;
					break;
				case 4:
				case 6:
      			case 9:
    			case 11:a+=30;
					break;
				}
		 }
	}
	else
	{
		 for(a=0,A=A-1;A!=0;A--)
		 {
			 switch(A)
				{
				case 1:
				case 3:
      			case 5:
    			case 7:
				case 8:
				case 10:
				case 12:a+=31;
					break;
				case 2:a+=28;
					break;
				case 4:
				case 6:
      			case 9:
    			case 11:a+=30;
					break;
				}
		 }
	 a+=B;
	}
	printf("%d",a);
}
