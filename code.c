#include <stdio.h>

int main(void) {
	
	
	int t;
	scanf("%d", &t);
	
	int n;
	
	while(t--){
	    scanf("%d", &n);
	    int mins = n*60;
	    int max_games = mins/20;
	    printf("%d \n", max_games);
	}
	return 0;
}

