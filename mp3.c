#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<MMsystem.h>

int main() {
	system("color 9");
	PlaySound(TEXT("test.wav"), NULL, SND_ASYNC);
	system("pause");
	return 0;
}
