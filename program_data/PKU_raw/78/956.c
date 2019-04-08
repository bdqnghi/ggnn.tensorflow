

int main(){
	int z,q,s,l,A,B,C,D;
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for(s=1;s<=5;s++)
				for(l=1;l<=5;l++){
					if((z!=q)&&(z!=s)&&(z!=l)&&(q!=s)&&(q!=l)&&(s!=l)){
						A=((z+q)==(s+l));
						B=((z+l)>(s+q));
						C=((z+s)<q);
						D=A+B+C;
						if(D==3){
							if(z==5)
								printf("z 50\n");
							else
								if(q==5)
									printf("q 50\n");
								else
									if(s==5)
										printf("s 50\n");
									else
										if(l==5)
											printf("l 50\n");
							if(z==4)
								printf("z 40\n");
							else
								if(q==4)
									printf("q 40\n");
								else
									if(s==4)
										printf("s 40\n");
									else
										if(l==4)
											printf("l 40\n");
							if(z==3)
								printf("z 30\n");
							else
								if(q==3)
									printf("q 30\n");
								else
									if(s==3)
										printf("s 30\n");
									else
										if(l==3)
											printf("l 30\n");
							if(z==2)
								printf("z 20\n");
							else
								if(q==2)
									printf("q 20\n");
								else
									if(s==2)
										printf("s 20\n");
									else
										if(l==2)
											printf("l 20\n");
							if(z==1)
								printf("z 10\n");
							else
								if(q==1)
									printf("q 10\n");
								else
									if(s==1)
										printf("s 10\n");
									else
										if(l==1)
											printf("l 10\n");
						}
					}
				}
	return 0;
}