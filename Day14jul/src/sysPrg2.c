#include <stdio.h>
#include <signal.h>

void func1();

int main()
{
	printf("\nPress <DEL> key\n");
	signal(SIGINT, func1);
	for(;;);
	
	return 0;
}

void func1()
{
	printf("Hey Ramya!\nYou have pressed the <DEL> key\n");		
}


// out put :press
// ctrl>shift>z
//

