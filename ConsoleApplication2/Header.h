#pragma once
#include <stdio.h>

int summ(int a, int b)
{
	return a + b;
}
int mine(int a, int b)
{
	return a - b;
}
int ymn(int a, int b)
{
	return a * b;
}
int del(int a, int b)
{
	return a / b;
}
char* mass(const char* s1, const char* s2)
{
    char* result = malloc(strlen(s1) + strlen(s2) + 1); 
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}
