#include <stdio.h>

int main(int argc, char** argv) {
	char my_name[] = "Dewi";
	int volume = 0,
		  length = 0,
		  tall = 0,
		  width = 0;
	
	printf("My name is %s \n", my_name);
		  
    printf("Enter length : ");
    scanf("%d", &length);
    
	printf("Enter width : ");
    scanf("%d", &width);
    
    printf("Enter tall : ");
    scanf("%d", &tall);
    
    volume = tall * length * width;
    printf("\nResult : %d \n", volume);
    
    return 0;
}
