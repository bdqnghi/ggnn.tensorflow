int main()
{
	int A,B,C,D,E,s1,s2,s3,s4,s5,flag=0;
	for(A=1;A<=5;A++)
	{
		for(B=1;B<=5;B++)
		{
			if(B==A)continue;
			for(C=1;C<=5;C++)
			{
				if(C==B||C==A)continue;
				for(D=1;D<=5;D++)
				{
					if(D==C||D==B||D==A)continue;
					E=15-A-B-C-D;
					if(E!=2&&E!=3)
					{
						s1=(E==1);
						s2=(B==2);
						s3=(A==5);
						s4=(C!=1);
						s5=(D==1);
						if(s1+s2+s3+s4+s5==2)
						{
							if((A==1||A==2)&&s1==1&&s5==1&&D==1)
							{
								cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E<<endl;
								flag=1;
								break;								
							}
							if((B==1||B==2)&&s2==1)
							{
								if((C==1||C==2)&&s3==1)
								{
									cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E<<endl;
									flag=1;
									break;
								}
							}
							if((C==1||C==2)&&s3==1)
							{
								if((D==1||D==2)&&s4==1)
								{
									cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E<<endl;
									flag=1;
									break;
								}
								if((E==1||E==2)&&s5==1&&D==1)
								{
									cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E<<endl;
									flag=1;
									break;
								}
							}
							if((D==1||D==2)&&s4==1)
							{
								if((E==1||E==2)&&s5==1)
								{
									cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E<<endl;
									flag=1;
									break;
								}
							}
						}
					}
				}
			if(flag==1)break;
			}
			if(flag==1)break;
		}
		if(flag==1)break;
	}
	return 0;
}