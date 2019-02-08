#include <stdio.h>
#include "newMessage.h"

int main(int argc, char* argv[])
{
	printf("Hello from program 1");
	char s[100] = "\nHowya, I am being printed using newMessage in prog 1";
	sayHello(s);
}