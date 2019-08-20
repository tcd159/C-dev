#include <stdio.h>
//*****
//****
//***
//**
//*

//int, char, float
//for (int j = 0; j < 5; j++)

int main()
{
	for (int j = 0; j < 5;j++)
	{
		for (int i = 0; i < 5 - j; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	
		

	return 0;

}