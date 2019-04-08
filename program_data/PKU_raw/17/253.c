int brackets(void){
	int chart[2][100],c,count=0,pos,state = 0,tmp,first_left,previous_left,end_flag = 0;
	/*state:0 for search left(start,you have to move right)
	        1 for have left and search right(you have to move right)
			2 for search previous left(you have to move left)
			*/
	for(;;count++){
		c = getchar();
		if(c == EOF)return 1;
		if(c == '\n'){break;}
		chart[0][count] = c;
		if(c == 40){chart[1][count] = 36;} //$
		else if(c == 41){chart[1][count] = 63;} //?
		else{chart[1][count] = 32;} //
	}
	for(pos=0;end_flag == 0;){
		switch(state){
		case 0:
			if(chart[1][pos] == 36){
				state = 1; //switch to state 1
				first_left = pos; //note the current first left bracket
				previous_left = pos; //note the previous left bracket
				if(pos == count){end_flag = 1;}
				else{pos += 1;} //move right
			}
			else{
				if(pos == count){end_flag = 1;} //end of loop
				else{pos += 1;}//move right
			}
			break;
		case 1:
			if(chart[1][pos] == 63){
				chart[1][pos] = 32; //match
				chart[1][previous_left] = 32;
				if(previous_left != first_left){
					state = 2; //switch to state 2
					pos = previous_left; //jump to previous left
				}
				else{
					if(pos == count){end_flag = 1;}
					else{
					    state = 0;
					    pos += 1;
					}
				}
			}
			else if(chart[1][pos] == 36){
				previous_left = pos; // renew previous left bracket
				pos += 1; //move right
			}
			else{
				if(pos == count){end_flag = 1;}
				else{pos += 1;} //find a space,move right
			}
			break;
		case 2:
			if(chart[1][pos] == 36){
				previous_left = pos;
				state = 1;
			}
			else{pos -= 1;}
			break;
		}
		if(pos > count){pos = count;}//force position
	}
	for(tmp=0;tmp < count;tmp++){
		putchar(chart[0][tmp]);
		if(tmp == count - 1){putchar('\n');}
	}
	for(tmp=0;tmp < count;tmp++){
		putchar(chart[1][tmp]);
		if(tmp == count - 1){putchar('\n');}
	}
	return 0;
}
int main(){
	while(1){
        if(brackets() == 1)break;
	}
    return 0;
}