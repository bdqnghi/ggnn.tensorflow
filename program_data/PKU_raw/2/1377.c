struct a{
int n;
char s[27];
}b[1000];
int main()
{
	int n;
	scanf("%d",&n);
	int i,k;
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&b[i].n,b[i].s);
	}
	int c[26]={0};
	for(i=0;i<n;i++)
	{
		for(k=0;b[i].s[k];k++)
		{switch(b[i].s[k]){
		case 'A':c[0]++;break;
		case 'B':c[1]++;break;
		case 'C':c[2]++;break;
		case 'D':c[3]++;break;
		case 'E':c[4]++;break;
		case 'F':c[5]++;break;
		case 'G':c[6]++;break;
		case 'H':c[7]++;break;
		case 'I':c[8]++;break;
		case 'J':c[9]++;break;
		case 'K':c[10]++;break;
		case 'L':c[11]++;break;
		case 'M':c[12]++;break;
		case 'N':c[13]++;break;
		case 'O':c[14]++;break;
		case 'P':c[15]++;break;
		case 'Q':c[16]++;break;
		case 'R':c[17]++;break;
		case 'S':c[18]++;break;
		case 'T':c[19]++;break;
		case 'U':c[20]++;break;
		case 'V':c[21]++;break;
		case 'W':c[22]++;break;
		case 'X':c[23]++;break;
		case 'Y':c[24]++;break;
		case 'Z':c[25]++;break;
		}}
	}
	int j,max=0;
	for(i=0;i<26;i++)
	{
		if(c[i]>max)
		{	max=c[i];
		j=i;}
	}
	int t=0;
	switch(j){
	case 0:printf("A\n%d\n",max);
		for(i=0;i<n;i++)
		   {
			   for(k=0;b[i].s[k];k++)
			   {
				   if(b[i].s[k]=='A')
				   printf("%d\n",b[i].n);
			   }
			   
		   }
		break;
	case 1:printf("B\n%d\n",max);
		for(i=0;i<n;i++)
		{
			for(k=0;b[i].s[k];k++)
				if(b[i].s[k]=='B')
					printf("%d\n",b[i].n);
		}
		break;
	case 2:printf("C\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='C')printf("%d\n",b[i].n);}break;
	case 3:printf("D\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='D')printf("%d\n",b[i].n);}break;
	case 4:printf("E\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='E')printf("%d\n",b[i].n);}break;
	case 5:printf("F\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='F')printf("%d\n",b[i].n);}break;
	case 6:printf("G\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='G')printf("%d\n",b[i].n);}break;
	case 7:printf("H\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='H')printf("%d\n",b[i].n);}break;
	case 8:printf("I\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='I')printf("%d\n",b[i].n);}break;
	case 9:printf("J\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='J')printf("%d\n",b[i].n);}break;
	case 10:printf("K\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='K')printf("%d\n",b[i].n);}break;
	case 11:printf("L\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='L')printf("%d\n",b[i].n);}break;
	case 12:printf("M\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='M')printf("%d\n",b[i].n);}break;
	case 13:printf("N\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='M')printf("%d\n",b[i].n);}break;
	case 14:printf("O\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='O')printf("%d\n",b[i].n);}break;
	case 15:printf("P\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='P')printf("%d\n",b[i].n);}break;
	case 16:printf("Q\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='Q')printf("%d\n",b[i].n);}break;
	case 17:printf("R\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='R')printf("%d\n",b[i].n);}break;
	case 18:printf("S\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='S')printf("%d\n",b[i].n);}break;
	case 19:printf("T\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='T')printf("%d\n",b[i].n);}break;
	case 20:printf("U\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='U')printf("%d\n",b[i].n);}break;
	case 21:printf("V\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='V')printf("%d\n",b[i].n);}break;
	case 22:printf("W\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='W')printf("%d\n",b[i].n);}break;
	case 23:printf("X\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='X')printf("%d\n",b[i].n);}break;
	case 24:printf("Y\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='Y')printf("%d\n",b[i].n);}break;
	case 25:printf("Z\n%d\n",max);for(i=0;i<n;i++){for(k=0;b[i].s[k];k++)if(b[i].s[k]=='Z')printf("%d\n",b[i].n);}break;
	
	}
	return 0;
}
