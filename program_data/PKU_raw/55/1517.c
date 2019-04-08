// ??7.13.cpp : ??????????????
//

char antichange(int x)
{
  if(x==0){return '0';}
  if(x==1){return '1';}
  if(x==2){return '2';}
  if(x==3){return '3';}
  if(x==4){return '4';}
  if(x==5){return '5';}
  if(x==6){return '6';}
  if(x==7){return '7';}
  if(x==8){return '8';}
  if(x==9){return '9';}
  if(x==10){return 'A';}
  if(x==11){return 'B';}
  if(x==12){return 'C';}
  if(x==13){return 'D';}
  if(x==14){return 'E';}
  if(x==15){return 'F';}
  if(x==16){return 'G';}
  if(x==17){return 'H';}
  if(x==18){return 'I';}
  if(x==19){return 'J';}
  if(x==20){return 'K';}
  if(x==21){return 'L';}
  if(x==22){return 'M';}
  if(x==23){return 'N';}
  if(x==24){return 'O';}
  if(x==25){return 'P';}
  if(x==26){return 'Q';}
  if(x==27){return 'R';}
  if(x==28){return 'S';}
  if(x==29){return 'T';}
  if(x==30){return 'U';}
  if(x==31){return 'V';}
  if(x==32){return 'W';}
  if(x==33){return 'X';}
  if(x==34){return 'Y';}
  if(x==35){return 'Z';}
}
char change(char x)
{
  if(x=='0'){return 0;}
  if(x=='1'){return 1;}
  if(x=='2'){return 2;}
  if(x=='3'){return 3;}
  if(x=='4'){return 4;}
  if(x=='5'){return 5;}
  if(x=='6'){return 6;}
  if(x=='7'){return 7;}
  if(x=='8'){return 8;}
  if(x=='9'){return 9;}
  if(x=='a'||x=='A'){return 10;}
  if(x=='b'||x=='B'){return 11;}
  if(x=='c'||x=='C'){return 12;}
  if(x=='d'||x=='D'){return 13;}
  if(x=='e'||x=='E'){return 14;}
  if(x=='f'||x=='F'){return 15;}
  if(x=='g'||x=='G'){return 16;}
  if(x=='h'||x=='H'){return 17;}
  if(x=='i'||x=='I'){return 18;}
  if(x=='j'||x=='J'){return 19;}
  if(x=='k'||x=='K'){return 20;}
  if(x=='l'||x=='L'){return 21;}
  if(x=='m'||x=='M'){return 22;}
  if(x=='n'||x=='N'){return 23;}
  if(x=='o'||x=='O'){return 24;}
  if(x=='p'||x=='P'){return 25;}
  if(x=='q'||x=='Q'){return 26;}
  if(x=='r'||x=='R'){return 27;}
  if(x=='s'||x=='S'){return 28;}
  if(x=='t'||x=='T'){return 29;}
  if(x=='u'||x=='U'){return 30;}
  if(x=='v'||x=='V'){return 31;}
  if(x=='w'||x=='W'){return 32;}
  if(x=='x'||x=='X'){return 33;}
  if(x=='y'||x=='Y'){return 34;}
  if(x=='z'||x=='Z'){return 35;}
}
int main()
{
	int l1=0,l2=0,l3=0,i=0,part=0,sum=0,j=0,mi=1,r[LEN],s=0;
	char a[LEN],b[LEN],c[LEN],result[LEN];
	scanf("%s%s%s",a,b,c);
	l1=atoi(a),l2=strlen(b),l3=atoi(c);
         for(i=0;i<l2;i++)
	{
	  s+=change(b[i]);
	}
if(s==0)
{
  printf("0");
}
else
{
	//printf("a=%d c=%d\n",l1,l3);
	sum=change(b[l2-1]);
	//printf("sum=%d\n",sum);
	mi=l1;
	for(i=l2-2;i>=0;i--)
	{
	  part=change(b[i]);
	  //printf("mi=%d\n",mi);
	  part=part*mi;
	  //printf("part=%d\n",part);
	  sum=sum+part;
	  //printf("sum=%d\n",sum);
	  mi=mi*l1;
	}
	while(sum!=0)
	{
	  r[j]=sum%l3;
	  result[j]=antichange(r[j]);
      //printf("result[j]=%c\n",result[j]);
	  //printf("r[j]=%d\n",r[j]);
	  j++;
	  sum=sum/l3;
	}
	part=j;
	for(j=part-1;j>=0;j--)
	{
	  printf("%c",result[j]);
	}
}
	return 0;
}

