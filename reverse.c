#include <stdio.h>
#include <string.h>

int main(void)
{
	// prototype:
	void reverse(char *text, int n);

	
	char text[100];
	printf("Input word to reverse: ");
	
	scanf("%s", text);
	
	int len = strlen(text);	
	reverse(text, len);
	
}

void reverse(char *text, int n)
{
	if (n == -1)
	{
		return;
	}
	else
	{
		printf("%c", text[n - 1]);
		reverse(text, n - 1);
	}
}
