
int main()
{
	int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
			switch(b)
			{
			case 1:
				d=c;
				break;
			case 2:
				d=31+c;
				break;
			case 3:
				d=29+31+c;
				break;
				case 4:
					d=29+31+31+c;
					break;
					case 5:
						d=29+31+31+30+c;
						break;
						case 6:
							d=29+31*3+30+c;
							break;
							case 7:
								d=29+31*3+60+c;
								break;
								case 8:
									d=29+31*4+60+c;
								break;
									case 9:
										d=29+31*5+60+c;
										break;
										case 10:
											d=29+31*5+90+c;
											break;
											case 11:
												d=29+31*6+90+c;
												break;
												case 12:
													d=29+31*6+120+c;
													break;
                                                    printf("%d",d);
													
			}
			if((a%4!=0||a%100==0&&a%400!=0)&&b>2)
			d=d-1;
			printf("%d",d);
		
	return 0;
}

