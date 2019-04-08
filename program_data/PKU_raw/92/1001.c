int main(){
    int n,i;
    int tianji[10100],king[10100];
    while(cin>>n){
        if(!n)break;
        i=0;
        while(i<n){
            cin>>tianji[i++];
        }
        i=0;
        while(i<n){
            cin>>king[i++];
        }
        sort(tianji,tianji+n);
        sort(king,king+n);
        int b1,e1,b2,e2,score=0;
       // cout<<"%"<<score<<endl;
        b1=0;e1=n-1;b2=0;e2=n-1;
        while(b1<=e1){
            if(tianji[e1]>king[e2]){
                score+=200;e1--;e2--;
            }
            else if(tianji[e1]<king[e2]){
                score-=200;e2--;b1++;
            }
            else{
                if(tianji[b1]!=king[b2]&&b1<=e1)
                                while(tianji[b1]!=king[b2]&&b1<=e1){
                    if(tianji[b1]>king[b2]){
                        b1++;b2++;score+=200;
                    }
                    else{
                        b1++;e2--;score-=200;
                    }
                }
                else if(b1<e1&&tianji[b1]==king[b2]){
                    if(tianji[b1]<king[e2])score-=200;
                    b1++;e2--;
                }
                else if(b1==e1)break;
            }
        }
        cout<<score<<endl;
    }
    return 0;
}
