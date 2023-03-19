#include<stdio.h>

void printSkyscraper(int height, int width);
void topOdd(int width);
void topEven(int width);
void printBody(int height, int width);
void printBottom(int width);
int main(){
	int h, w;
	printf("Get height: \n");
	scanf("%d", &h);
	printf("Get width: \n");
	scanf("%d", &w);
	
	printSkyscraper(h, w);
	
	return 0;
}

void printSkyscraper(int height, int width){
	int i, j;
	width%2==0 ? topEven(width) : topOdd(width);
	printBody(height, width);
	printBottom(width);
}

void topEven(int width){
	int i;
	for(i = 0; i < (width/2)-1; i++){
		printf(" ");
		if(i == (width/2)-2){
			printf("**");
		}
	}
}

void topOdd(int width){
	int i;
	for(i = 0; i < (width/2); i++){
		printf(" ");
		if(i == (width/2)-1){
			printf("*");
		}
	}
}

void printBody(int height, int width){
	int i, j;
	for(i = 0; i < height - 2; i++){
		printf("\n");
		for(j = 0; j < (width-1); j++){
			j==0 ? printf(" ") : printf("*");
		}
	}
}

void printBottom(int width){
	int i;
	printf("\n");
	for(i = 0; i < width; i++){
		printf("*");
	}
}
