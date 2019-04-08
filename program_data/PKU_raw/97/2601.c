/*
 * ??????????
 * ?????2011?11?6?
 * ??????
 * ???????????????
 */
int main()                                         //?????
{  int sum;       //sum?????
   int num100=0,num50=0,num20=0,num10=0,num5=0,num1=0;    //???????????
   cin >> sum;                                //??????
   int yu100=sum%100;
   num100=(sum-yu100)/100;                    //???????????
   int yu10=yu100%10;
   int shiwei=yu100-yu10;                     //?????
   if(shiwei>=50) {
	   num50=1;
	   int yu20=shiwei-50;
	   if(yu20%20==0) num20=yu20/20;
	   else num20=(yu20-10)/20;
	   num10=(yu20-20*num20)/10;
   }
   else {num50=0;                              //??50??????
       if(shiwei%20==0) {num20=shiwei/20;
       num10=0;}
       else { num20=(shiwei-10)/20;
       num10=(shiwei-20*num20)/10;             //??20?10??????
       }
   }
   int gewei;                          //??5??1??????
   gewei=sum%10;
   if(gewei==0) {
	   num5=0;
	   num1=0;
   }
   else if(gewei<5&&gewei>0){
	   num5=0;
	   num1=gewei;
   }
   else if(gewei>=5&&gewei<=9){
	   num5=1;
	   num1=gewei%5;
   }

   cout << num100 << endl;
   cout << num50 << endl;
   cout << num20 << endl;
   cout << num10 << endl;
   cout << num5 << endl;
   cout << num1 << endl;                       //???????



	return 0;
}                                                   //?????