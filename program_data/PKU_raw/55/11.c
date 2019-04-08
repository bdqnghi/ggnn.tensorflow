int main()
{
	char p[100],z[100],a;         //??????????
	long sum=0;                   //??????
	int  x,m,n,t,b;
	int i,k,c;
	scanf("%d",&m);
	scanf("%s",p);
	scanf("%d",&t);//????
    n=strlen(p);//p???
	for(i=0;p[i]!='\0';i++)
	{
	  a=p[i];
	  if(a>='a'){b=a-'a'+10;}
	  else if(a>='A'){b=a-'A'+10;}
	  else if(a<='9'){b=a-'0';}
	  sum=sum+(long)(b*pow(m,n-1));
      n--;
	}//?p????????
	long r=sum;
	if(sum==0){printf("0");}
	int w=0;
	for(c=0;r>0;c++){ x=r%t;r=r/t;w++;}//?????
	for(k=w-1;k>=0;k--)
	{
	  x=sum%t;
	  sum=sum/t;
	  if(x<=10)
	  {
	     switch(x)
		 {
	     case 0:z[k]='0';break;
	     case 1:z[k]='1';break;
	     case 2:z[k]='2';break;
         case 3:z[k]='3';break;
	     case 4:z[k]='4';break;
	     case 5:z[k]='5';break;
	     case 6:z[k]='6';break;
	     case 7:z[k]='7';break;
	     case 8:z[k]='8';break;
	     case 9:z[k]='9';break;
		 case 10:z[k]='A';break;
		 }
	  }
	  else if(x>=11&&x<=20)
	  {
		  switch(x)
		  {
	      case 11:z[k]='B';break;
	      case 12:z[k]='C';break;
	      case 13:z[k]='D';break;
	      case 14:z[k]='E';break;
	      case 15:z[k]='F';break;
	      case 16:z[k]='G';break;
	      case 17:z[k]='H';break;
	      case 18:z[k]='I';break;
	      case 19:z[k]='J';break;
	      case 20:z[k]='K';break;
		  }
	  }
	  else if(x>=21&&x<=30){
		  switch(x){
	      case 21:z[k]='L';break;
	      case 22:z[k]='M';break;
	      case 23:z[k]='N';break;
	      case 24:z[k]='O';break;
          case 25:z[k]='P';break;
	      case 26:z[k]='Q';break;
	      case 27:z[k]='R';break;
	      case 28:z[k]='S';break;
	      case 29:z[k]='T';break;
	      case 30:z[k]='U';break;
		  }
	  }
	  else{
		  switch(x){
	      case 31:z[k]='V';break;
	      case 32:z[k]='W';break;
	      case 33:z[k]='X';break;
	      case 34:z[k]='Y';break;
	      case 35:z[k]='Z';break;
		  }
	  }//??????????????
	}
	  z[w]='\0';//??
	  printf("%s",z);//????????
	return 0;
}