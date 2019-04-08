void main()
{
	int x[52]={0},i,flag,len;
	char str[MAX];
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
	    if(str[i]=='a') x[0]+=1;
		else if(str[i]=='b') x[1]+=1;
		else if(str[i]=='c') x[2]+=1;
		else if(str[i]=='d') x[3]=x[3]+1;
		else if(str[i]=='e') x[4]=x[4]+1;
		else if(str[i]=='f') x[5]=x[5]+1;
		else if(str[i]=='g') x[6]=x[6]+1;
		else if(str[i]=='h') x[7]=x[7]+1;
		else if(str[i]=='i') x[8]=x[8]+1;
		else if(str[i]=='j') x[9]=x[9]+1;
		else if(str[i]=='k') x[10]=x[10]+1;
		else if(str[i]=='l') x[11]=x[11]+1;
		else if(str[i]=='m') x[12]=x[12]+1;
		else if(str[i]=='n') x[13]=x[13]+1;
		else if(str[i]=='o') x[14]=x[14]+1;
		else if(str[i]=='p') x[15]=x[15]+1;
		else if(str[i]=='q') x[16]=x[16]+1;
		else if(str[i]=='r') x[17]=x[17]+1;
		else if(str[i]=='s') x[18]=x[18]+1;
		else if(str[i]=='t') x[19]=x[19]+1;
		else if(str[i]=='u') x[20]=x[20]+1;
		else if(str[i]=='v') x[21]=x[21]+1;
		else if(str[i]=='w') x[22]=x[22]+1;
		else if(str[i]=='x') x[23]=x[23]+1;
        else if(str[i]=='y') x[24]=x[24]+1; 
		else if(str[i]=='z') x[25]=x[25]+1;
	    else if(str[i]=='A') x[26]+=1;
		else if(str[i]=='B') x[27]+=1;
		else if(str[i]=='C') x[28]=x[28]+1;
		else if(str[i]=='D') x[29]=x[29]+1;
		else if(str[i]=='E') x[30]=x[30]+1;
		else if(str[i]=='F') x[31]=x[31]+1;
		else if(str[i]=='G') x[32]=x[32]+1;
		else if(str[i]=='H') x[33]=x[33]+1;
		else if(str[i]=='I') x[34]=x[34]+1;
		else if(str[i]=='J') x[35]=x[35]+1;
		else if(str[i]=='K') x[36]=x[36]+1;
		else if(str[i]=='L') x[37]=x[37]+1;
		else if(str[i]=='M') x[38]=x[38]+1;
		else if(str[i]=='N') x[39]=x[39]+1;
		else if(str[i]=='O') x[40]=x[40]+1;
		else if(str[i]=='P') x[41]=x[41]+1;
		else if(str[i]=='Q') x[42]=x[42]+1;
		else if(str[i]=='R') x[43]=x[43]+1;
		else if(str[i]=='S') x[44]=x[44]+1;
		else if(str[i]=='T') x[45]=x[45]+1;
		else if(str[i]=='U') x[46]=x[46]+1;
		else if(str[i]=='V') x[47]=x[47]+1;
		else if(str[i]=='W') x[48]=x[48]+1;
        else if(str[i]=='X') x[49]=x[49]+1; 
		else if(str[i]=='Y') x[50]=x[50]+1;
		else if(str[i]=='Z') x[51]+=1;
	}
        if(x[26]>0)  printf("A=%d\n",x[26]);
		if(x[27]>0)  printf("B=%d\n",x[27]); 
		if(x[28]>0)  printf("C=%d\n",x[28]);
		if(x[29]>0)  printf("D=%d\n",x[29]);
		if(x[30]>0)  printf("E=%d\n",x[30]);
		if(x[31]>0)  printf("F=%d\n",x[31]); 
		if(x[32]>0)  printf("G=%d\n",x[32]);
		if(x[33]>0)  printf("H=%d\n",x[33]);
		if(x[34]>0)  printf("I=%d\n",x[34]);
		if(x[35]>0)  printf("J=%d\n",x[35]); 
		if(x[36]>0)  printf("K=%d\n",x[36]);
		if(x[37]>0)  printf("L=%d\n",x[37]); 
		if(x[38]>0)  printf("M=%d\n",x[38]);
		if(x[39]>0)  printf("N=%d\n",x[39]);
		if(x[40]>0)  printf("O=%d\n",x[40]);
		if(x[41]>0)  printf("P=%d\n",x[41]); 
		if(x[42]>0)  printf("Q=%d\n",x[42]);
		if(x[43]>0)  printf("R=%d\n",x[43]);
		if(x[44]>0)  printf("S=%d\n",x[44]);
		if(x[45]>0)  printf("T=%d\n",x[45]); 	
		if(x[46]>0)  printf("U=%d\n",x[46]);
		if(x[47]>0)  printf("V=%d\n",x[47]); 
		if(x[48]>0)  printf("W=%d\n",x[48]);
		if(x[49]>0)  printf("X=%d\n",x[49]);
		if(x[50]>0)  printf("Y=%d\n",x[50]);
		if(x[51]>0)  printf("Z=%d\n",x[51]); 
		if(x[0]>0)  printf("a=%d\n",x[0]);
		if(x[1]>0)  printf("b=%d\n",x[1]); 
		if(x[2]>0)  printf("c=%d\n",x[2]);
		if(x[3]>0)  printf("d=%d\n",x[3]);
		if(x[4]>0)  printf("e=%d\n",x[4]);
		if(x[5]>0)  printf("f=%d\n",x[5]); 
		if(x[6]>0)  printf("g=%d\n",x[6]);
		if(x[7]>0)  printf("h=%d\n",x[7]); 
		if(x[8]>0)  printf("i=%d\n",x[8]);
		if(x[9]>0)  printf("j=%d\n",x[9]);
		if(x[10]>0)  printf("k=%d\n",x[10]);
		if(x[11]>0)  printf("l=%d\n",x[11]); 
		if(x[12]>0)  printf("m=%d\n",x[12]);
		if(x[13]>0)  printf("n=%d\n",x[13]);
		if(x[14]>0)  printf("o=%d\n",x[14]);
		if(x[15]>0)  printf("p=%d\n",x[15]); 
		if(x[16]>0)  printf("q=%d\n",x[16]);
		if(x[17]>0)  printf("r=%d\n",x[17]); 
		if(x[18]>0)  printf("s=%d\n",x[18]);
		if(x[19]>0)  printf("t=%d\n",x[19]);
		if(x[20]>0)  printf("u=%d\n",x[20]);
		if(x[21]>0)  printf("v=%d\n",x[21]); 
		if(x[22]>0)  printf("w=%d\n",x[22]);
		if(x[23]>0)  printf("x=%d\n",x[23]);
		if(x[24]>0)  printf("y=%d\n",x[24]);
		if(x[25]>0)  printf("z=%d\n",x[25]);
		flag=0;
		for(i=0;i<52;i++)
		{
			if(x[i]!=0)  flag=1;
		}
		if(flag==0) printf("No\n");
}
		
	

