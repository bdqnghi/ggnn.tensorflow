int main()
{
	char zfc[300]="!";
	int sz[26];
	for (int zm=0;zm<26;zm++){
		sz[zm]=0;
	}
	scanf("%s",zfc);
	int sum=0;
	for(int dng=0;dng<300;dng++){
		switch(zfc[dng])
		{
		case'a':sz[0]+=1,sum++;break;
		case'b':sz[1]+=1,sum++;break;
		case'c':sz[2]+=1,sum++;break;
		case'd':sz[3]+=1,sum++;break;
		case'e':sz[4]+=1,sum++;break;
		case'f':sz[5]+=1,sum++;break;
		case'g':sz[6]+=1,sum++;break;
		case'h':sz[7]+=1,sum++;break;
		case'i':sz[8]+=1,sum++;break;
		case'j':sz[9]+=1,sum++;break;
		case'k':sz[10]+=1,sum++;break;
		case'l':sz[11]+=1,sum++;break;
		case'm':sz[12]+=1,sum++;break;
		case'n':sz[13]+=1,sum++;break;
		case'o':sz[14]+=1,sum++;break;
		case'p':sz[15]+=1,sum++;break;
		case'q':sz[16]+=1,sum++;break;
		case'r':sz[17]+=1,sum++;break;
		case's':sz[18]+=1,sum++;break;
		case't':sz[19]+=1,sum++;break;
		case'u':sz[20]+=1,sum++;break;
		case'v':sz[21]+=1,sum++;break;
		case'w':sz[22]+=1,sum++;break;
		case'x':sz[23]+=1,sum++;break;
		case'y':sz[24]+=1,sum++;break;
		case'z':sz[25]+=1,sum++;break;
		}
	}
	if(sum==0){
		printf("No");
	}
	else{
		for(int djg=0;djg<26;djg++){
			if(sz[djg]!=0){
				char xxzm=97+djg;
				printf("%c=%d\n",xxzm,sz[djg]);
			}
		}
	}
	return 0;
}