void main()
{   char c[300];
int b[30]={0},i,sum;
		gets(c);
		for(i=0;i<strlen(c);i++)
		{if(c[i]==97)
				b[0]++;
			
				
else if(c[i]==98)
				b[1]++;
else if(c[i]==99)
				b[2]++;
else if(c[i]==100)
				b[3]++;
else if(c[i]==101)
				b[4]++;
else if(c[i]==102)
				b[5]++;
else if(c[i]==103)
				b[6]++;
else if(c[i]==104)

			b[7]++;
else if(c[i]==105)
				b[8]++;
else if(c[i]==106)
				b[9]++;
else if(c[i]==107)
				b[10]++;

else if(c[i]==108)
				b[11]++;
else if(c[i]==109)
				b[12]++;
else if(c[i]==110)
				b[13]++;
else if(c[i]==111)
				b[14]++;
else if(c[i]==112)
				b[15]++;
else if(c[i]==113)
				b[16]++;
else if(c[i]==114)
				b[17]++;
else if(c[i]==115)
				b[18]++;
else if(c[i]==116)
				b[19]++;
else if(c[i]==117)
				b[20]++;
else if(c[i]==118)
				b[21]++;

else if(c[i]==119)
				b[22]++;
else if(c[i]==120)
				b[23]++;
else if(c[i]==121)
				b[24]++;
else if(c[i]==122)
				b[25]++;
		}
		sum=b[0]+b[1]+b[2]+b[3]+b[4]+b[5]+b[6]+b[7]+
		b[8]+b[9]+b[10]+b[11]+b[12]+b[13]+b[14]+b[15]+b[16]+b[17]+b[18]+b[19]+
		b[20]+b[21]+b[22]+b[23]+b[24]+b[25];
		if(sum==0)
			printf("No");
		
		for(i=0;i<=25;i++)
			if(b[i])
				printf("%c=%d\n",i+97,b[i]);
}
		
			

