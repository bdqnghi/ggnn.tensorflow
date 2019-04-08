int main()
{
     int i;                       //?? 
     char chnum[20];        //????
     int num[20],resnum[20];      //num???????????  resnum ???? 
     int n;
     long sum=0;                     //n????? sum????????? 
     int a,b;                             //a?? b?? 
     //???? ?????
      
     cin>>a>>chnum>>b;
     n=strlen(chnum);
     for(i=0;i<20;i++)
           {
                  if(chnum[i]=='a'){num[i]=10;continue;}  if(chnum[i]=='A'){num[i]=10;continue;}
                  if(chnum[i]=='b'){num[i]=11;continue;}  if(chnum[i]=='B'){num[i]=11;continue;}
                  if(chnum[i]=='c'){num[i]=12;continue;}  if(chnum[i]=='C'){num[i]=12;continue;}
                  if(chnum[i]=='d'){num[i]=13;continue;}  if(chnum[i]=='D'){num[i]=13;continue;}
                  if(chnum[i]=='e'){num[i]=14;continue;}  if(chnum[i]=='E'){num[i]=14;continue;}
                  if(chnum[i]=='f'){num[i]=15;continue;}  if(chnum[i]=='F'){num[i]=15;continue;}
                  if(chnum[i]=='g'){num[i]=16;continue;}  if(chnum[i]=='G'){num[i]=16;continue;}
                  if(chnum[i]=='h'){num[i]=17;continue;}  if(chnum[i]=='H'){num[i]=17;continue;}
                  if(chnum[i]=='i'){num[i]=18;continue;}  if(chnum[i]=='I'){num[i]=18;continue;}
                  if(chnum[i]=='j'){num[i]=19;continue;}  if(chnum[i]=='J'){num[i]=19;continue;}
                  if(chnum[i]=='k'){num[i]=20;continue;}  if(chnum[i]=='K'){num[i]=20;continue;}
                  if(chnum[i]=='l'){num[i]=21;continue;}  if(chnum[i]=='L'){num[i]=21;continue;}
                  if(chnum[i]=='m'){num[i]=22;continue;}  if(chnum[i]=='M'){num[i]=22;continue;}
                  if(chnum[i]=='n'){num[i]=23;continue;}  if(chnum[i]=='N'){num[i]=23;continue;}
                  if(chnum[i]=='o'){num[i]=24;continue;}  if(chnum[i]=='O'){num[i]=24;continue;}
                  if(chnum[i]=='p'){num[i]=25;continue;}  if(chnum[i]=='P'){num[i]=25;continue;}
                  if(chnum[i]=='q'){num[i]=26;continue;}  if(chnum[i]=='Q'){num[i]=26;continue;}
                  if(chnum[i]=='r'){num[i]=27;continue;}  if(chnum[i]=='R'){num[i]=27;continue;}
                  if(chnum[i]=='s'){num[i]=28;continue;}  if(chnum[i]=='S'){num[i]=28;continue;}
                  if(chnum[i]=='t'){num[i]=29;continue;}  if(chnum[i]=='T'){num[i]=30;continue;}
                  if(chnum[i]=='v'){num[i]=31;continue;}  if(chnum[i]=='V'){num[i]=31;continue;}
                  if(chnum[i]=='w'){num[i]=32;continue;}  if(chnum[i]=='W'){num[i]=32;continue;}
                  if(chnum[i]=='x'){num[i]=33;continue;}  if(chnum[i]=='X'){num[i]=33;continue;}
                  if(chnum[i]=='y'){num[i]=34;continue;}  if(chnum[i]=='Y'){num[i]=34;continue;}
                  if(chnum[i]=='z'){num[i]=35;continue;}  if(chnum[i]=='Z'){num[i]=35;continue;}                  
                  num[i]=(int)chnum[i]-48;
           }
     //???? ???? ???????????? 
     
     for(i=0;i<n;i++)
            sum+=num[i]*pow((double)a,(double)(n-i-1));
     //???? ?????????? 
     
     i=19;
     while(sum>=b)
       {resnum[i]=sum%b;
        sum=sum/b;
        i--;
       };
     resnum[i]=sum; 
     //???? ????????b????
     
     for(;i<20;i++)
       {if(resnum[i]==10){cout<<"A";continue;}
        if(resnum[i]==11){cout<<"B";continue;}
        if(resnum[i]==12){cout<<"C";continue;}
        if(resnum[i]==13){cout<<"D";continue;}
        if(resnum[i]==14){cout<<"E";continue;}
        if(resnum[i]==15){cout<<"F";continue;}
        if(resnum[i]==16){cout<<"G";continue;}
        if(resnum[i]==17){cout<<"H";continue;}
        if(resnum[i]==18){cout<<"I";continue;}
        if(resnum[i]==19){cout<<"J";continue;}
        if(resnum[i]==20){cout<<"K";continue;}
        if(resnum[i]==21){cout<<"L";continue;}
        if(resnum[i]==22){cout<<"M";continue;}
        if(resnum[i]==23){cout<<"N";continue;}
        if(resnum[i]==24){cout<<"O";continue;}
        if(resnum[i]==25){cout<<"P";continue;}
        if(resnum[i]==26){cout<<"Q";continue;}
        if(resnum[i]==27){cout<<"R";continue;}
        if(resnum[i]==28){cout<<"S";continue;}
        if(resnum[i]==29){cout<<"T";continue;}
        if(resnum[i]==30){cout<<"U";continue;}
        if(resnum[i]==31){cout<<"V";continue;}
        if(resnum[i]==32){cout<<"W";continue;}
        if(resnum[i]==33){cout<<"X";continue;}
        if(resnum[i]==34){cout<<"Y";continue;}
        if(resnum[i]==35){cout<<"Z";continue;}
        cout<<resnum[i];}     
     //???? ?b??????????b???????? 
     
     return 0;   
}
