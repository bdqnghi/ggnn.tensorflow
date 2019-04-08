int main(){
	int A,B,C,D,E,word[6];
	for(A=1;A<=5;A++){
		for(B=1;B<=5;B++){
			if(B==A)continue;//?continue??A,B,C,D,E?????? 
			for(C=1;C<=5;C++){
				if(C==A||C==B)continue;
				for(D=1;D<=5;D++){
					if(D==A||D==B||D==C)continue;
					for(E=1;E<=5;E++){
						if(E==A||E==B||E==C||E==D)continue;
						word[A]=(E==1);
						word[B]=(B==2);
						word[C]=(A==5);
						word[D]=(C!=1);
						word[E]=(D==1);//?word[A]???????? 
						if(word[1] && word[2] && !word[3] && !word[4] && !word[5] && E!=2 && E!=3)
						cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
						}
					}
				}
			}
		}
		
		return 0;
	}
