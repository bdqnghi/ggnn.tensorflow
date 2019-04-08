main()
{
	struct jifen
	{
		int xue;
		int score;
		float ji;
	}ke[10];
	int n,i,k,l;
	float j;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&ke[i].xue);
	for(i=0,j=0,l=0;i<=n-1;i++)
	{
		scanf("%d",&ke[i].score);
		k=ke[i].score;
		if(k>=90&&k<=100)
			ke[i].ji=4;
		else
			if(k>=85&&k<=89)
				ke[i].ji=3.7;
			else
				if(k>=82&&k<=84)
					ke[i].ji=3.3;
				else
					if(k>=78&&k<=81)
						ke[i].ji=3.0;
					else
						if(k>=75&&k<=77)
							ke[i].ji=2.7;
						else
							if(k>=72&&k<=74)
								ke[i].ji=2.3;
							else
								if(k>=68&&k<=71)
									ke[i].ji=2.0;
								else
									if(k>=64&&k<=67)
										ke[i].ji=1.5;
									else 
										if(k>=60&&k<=63)
											ke[i].ji=1.0;
										else
											if(k<60)
												ke[i].ji=0;
         j=j+ke[i].ji*ke[i].xue;
		 l=l+ke[i].xue;
	}
  printf("%.2f",j/l);
	return 0;
}