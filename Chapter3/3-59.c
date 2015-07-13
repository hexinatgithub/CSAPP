/*
3.59
*/

int switch_prob(int x, int n){
	int result = x;
	switch(n) {
		case 40:
		case 42:
			result = x<<3;
			break;

		case 43:
			result = x>>3;
			break;

		case 44:
			result = x*x*49+17;		

		case 45:
			result = x*x + 17;
			break;

		default:
			result = x+17;
			break;
	}
	return result;
}