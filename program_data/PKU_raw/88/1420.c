int main()
{
char c[30];
int i;

		for(i=0;i<30;i++)
		{scanf("%c",&c[i]);
		switch(c[i])
		{
		case '1':
		case '2':
	    case '3':
	    case '4':
	    case '5':
        case '6':
	    case '7':
		case '8':
         case '9':
	     case '0':
				printf("%c",c[i]);break;
				default :
					{switch(c[i-1])
			       {
		       case '1':
		        case '2':
               case '3':
	            case '4':
				case '5':
				case '6':
				case '7':
				case '8':
		          case '9':
			     case '0':
				printf("\n");break;
				   }
					}
			}}
	return 0;
		}
