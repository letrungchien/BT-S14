#include<stdio.h>

int main(){
    char string[]={"Hello World"};
	int length =sizeof(string)/sizeof(char);
	int count =0;
	int inWord=0;
	
	for(int i = 0; i < length - 1; i++) {
        if(string[i] != ' ') {
            inWord = 1;
        } else {
            inWord = 0;
        }
        if(inWord == 0) {
            count++;
        }
    }

    printf("count = %d\n", count + 1);

	return 0;
}
