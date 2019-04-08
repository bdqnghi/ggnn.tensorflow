int main()
{
	int n,i, y[300],m1[300],m2[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&y[i],&m1[i],&m2[i]);
	}
	for(i=0;i<n;i++)
	{
		if((y[i]%4==0&&y[i]%100!=0)||y[i]%400==0)
		{
			
			switch(m1[i])
			{
			case 1:m1[i]=0;break;
				case 2:m1[i]=31;break;
					case 3:m1[i]=31+29;break;
						case 4:m1[i]=31+29+31;break;
							case 5:m1[i]=31+29+31+30;break;
								case 6:m1[i]=31+29+31+30+31;break;
									case 7:m1[i]=31+29+31+30+31+30;break;
										case 8:m1[i]=31+29+31+30+31+30+31;break;
											case 9:m1[i]=31+29+31+30+31+30+31+31;break;
												case 10:m1[i]=31+29+31+30+31+30+31+31+30;break;
													case 11:m1[i]=366-30-31;break;
														case 12:m1[i]=366-31;break;
			}
				switch(m2[i])
			{
			case 1:m2[i]=0;break;
				case 2:m2[i]=31;break;
					case 3:m2[i]=31+29;break;
						case 4:m2[i]=31+29+31;break;
							case 5:m2[i]=31+29+31+30;break;
								case 6:m2[i]=31+29+31+30+31;break;
									case 7:m2[i]=31+29+31+30+31+30;break;
										case 8:m2[i]=31+29+31+30+31+30+31;break;
											case 9:m2[i]=31+29+31+30+31+30+31+31;break;
												case 10:m2[i]=31+29+31+30+31+30+31+31+30;break;
													case 11:m2[i]=366-30-31;break;
														case 12:m2[i]=366-31;break;
			}
				
			if((m2[i]-m1[i])%7==0||(m1[i]-m2[i])%7==0)
				printf("YES\n");
			else printf("NO\n");
		}
		else
		{
			switch(m1[i])
			{
			case 1:m1[i]=0;break;
				case 2:m1[i]=31;break;
					case 3:m1[i]=31+29-1;break;
						case 4:m1[i]=31+29+31-1;break;
							case 5:m1[i]=31+29+31+30-1;break;
								case 6:m1[i]=31+29+31+30+31-1;break;
									case 7:m1[i]=31+29+31+30+31+30-1;break;
										case 8:m1[i]=31+29+31+30+31+30+31-1;break;
											case 9:m1[i]=31+29+31+30+31+30+31+31-1;break;
												case 10:m1[i]=31+29+31+30+31+30+31+31+30-1;break;
													case 11:m1[i]=366-30-31-1;break;
														case 12:m1[i]=366-31-1;break;
			}
			
				switch(m2[i])
			{
			case 1:m2[i]=0;break;
				case 2:m2[i]=31;break;
					case 3:m2[i]=31+29-1;break;
						case 4:m2[i]=31+29+31-1;break;
							case 5:m2[i]=31+29+31+30-1;break;
								case 6:m2[i]=31+29+31+30+31-1;break;
									case 7:m2[i]=31+29+31+30+31+30-1;break;
										case 8:m2[i]=31+29+31+30+31+30+31-1;break;
											case 9:m2[i]=31+29+31+30+31+30+31+31-1;break;
												case 10:m2[i]=31+29+31+30+31+30+31+31+30-1;break;
													case 11:m2[i]=366-30-31-1;break;
														case 12:m2[i]=366-31-1;break;
			}
				
			if((m2[i]-m1[i])%7==0||(m1[i]-m2[i])%7==0)
				printf("YES\n");
			else printf("NO\n");

			
		
		
		}
	}
	

	
	return 0;
}