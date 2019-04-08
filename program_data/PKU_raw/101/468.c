
int main()
{
    int a,b,c;//??abc?????? 
    
    for(int i=0;i<27;i++) //?????????? 
    {
    a=floor((int)(floor(i/9))%3);//????floor??????double??? ???int? 
    b=floor((i%9)/3);
    c=i%3;
/*?????????:
(2-a)<(2-b)
(2-a)==(2-c)
(2-a)>(2-b)
(2-a)>(2-c)
(2-c)>(2-b)
(2-b)>(2-a)
*/
    int a1=0,b1=0,c1=0;//??abc????? 
    if(2-a<2-b){a1++;}
    if(2-a==2-c){a1++;}
    if(2-a>2-b){b1++;}
    if(2-a>2-c){b1++;}
    if(2-c>2-b){c1++;}
    if(2-b>2-a){c1++;}
    
    char ch[3];//??????? 
    if((a1==a)&&(b1==b)&&(c1==c))
    {
    ch[2-a]='A';
    ch[2-b]='B';
    ch[2-c]='C'; 
    cout<<ch;                  
    }
    }
    return 0;
}