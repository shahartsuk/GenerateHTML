#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include <Windows.h>
#pragma warning (disable:4996)

int GetLastError();

int main()
{
	int err = 0;
	char* ptr;
	FILE* f = fopen("helloError", "w");
	if (!f)
	{
		printf("error fail open the file");
		err = GetLastError();
		ptr = strerror(err);
		int f = 0;
		exit(1);
		// Log (error from system. Error code err . messege str)
	}
	fclose(f);

	for (int i = 0; i < 60; i++)
	{
		printf("shalom\n");
		_sleep(1000);
		// include window=Sleep.
	}

}