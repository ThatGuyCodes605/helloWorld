#include <stdio.h>
#include <string.h>
void hello_world(char* s){
	for (int i = 0; i < strlen(s); i++){
		printf("%c", s[i]");
	}
}
int main(void)
{
	hello_world("Hello, World");
	return 0;
}

