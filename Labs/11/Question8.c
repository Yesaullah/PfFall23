#include <stdio.h>

struct box{
	int height;
	int width;
	int length;
};

int main(){
	int n;
	int i;
	int volume;
	printf("Enter the number of boxes: ");
	scanf("%d", &n);
	//printf("\n");
	
	struct box data[n];
	
	//taking inputs for the dimensions
	for(i=1; i<=n; i++){
		printf("\nEnter the dimensions for box %d\n", i);
		printf("Length: ");
		scanf("%d", &data[i].length);
		printf("Width: ");
		scanf("%d", &data[i].width);
		printf("Height: ");
		scanf("%d", &data[i].height);
	}
	printf("\n");
	//doing calculations
	for(i=1; i<=n; i++){
		if(data[i].height>=41){
			printf("Box %d can not pass, it is too tall.\n", i);
			continue;
		}
		else{
			volume = data[i].height * data[i].length * data[i].width;
		}
		printf("The volume of box %d is: %d.\n", i, volume);
	}
}
