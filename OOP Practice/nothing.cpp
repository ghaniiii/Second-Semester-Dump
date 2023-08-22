#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int fd[2];
   
    char buf[1024];
    char data[100] ;
    
    printf("Enter the message: ");
    // scanf("%s", &data);
    
    fflush(stdin);
    fgets(data, 100, stdin);

    puts(data);

	
	return 0;
}