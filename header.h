
//guard code
#ifndef student_records

#define student_records		//defining the student records

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>		//adding basic library + math library

double read_double(FILE* infile);	//declaration and stating that we will be reading files
int read_integer(FILE* infile);
void print_double(FILE* outfile, double number);	//im actually not completely sure what void does. its like confirming with the code that we read this, like a hold

double calculate_sum (double number1, double number2, double number3, double number4, double number5);
double calculate_mean (double sum, int number);
double calculate_deviation (double number, double mean);
double calculate_variance (double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int num);
double calculate_standard_deviation (double variance);
double calculate_max (double number1, double number2, double number3, double number4, double number5);
double calculate_min (double number1, double number2, double number3, double number4, double number5);		//all my declarations, the ingredients that we will be using


#endif 