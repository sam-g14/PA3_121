
#include "header.h"     //to include the header and the declarations, refers back to that

double read_double(FILE* infile)    //now we are doing something with the header declaration
{
	double value;
	(void)fscanf(infile, "%lf", &value);    //telling the code to scan it but dont do anything with it yet
	
	return value;   //returns said value

}

int read_integer(FILE* infile)      //declaring the int  
{
	int value;
	
	(void)fscanf(infile, "%d", &value); //scan but dont do anything with it yet
	
	return value;   //return said value

}

void print_double(FILE* outfile, double number)     //declaring void
{
    fprintf(outfile, "%.2f\n", number); //.2 is two decimal points, no return needed
}



double calculate_sum(double number1, double number2, double number3, double number4, double number5)    //going to calculate the sum
{
    return number1 + number2 + number3 + number4 + number5;
}

double calculate_mean(double sum, int number)   //calculating the mean and returning the sum divided by number of total entries
{
    if (number == 0) 
    {
        return -1.0;
    }
    
    return sum / number; 
}

double calculate_deviation(double number, double mean)  //calculating the deviation, total entries minus the mean
{
    return number - mean;   
}

double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)    //calculating variance, deviation minus number total
{
    double deviation = (deviation1 * deviation1) + (deviation2 * deviation2) + (deviation3 * deviation3) + (deviation4 * deviation4) + (deviation5 * deviation5);
    
    return deviation / number;
}

double calculate_standard_deviation(double variance)    //returns the square root of variance
{
    return sqrt(variance);
}

double calculate_max(double number1, double number2, double number3, double number4, double number5)    //if statements to find the max number
{
    double max = number1;
    if (number2 > max)
    {
        max = number2;
    }
    if (number3 > max)
    {
        max = number3;
    }
    if (number4 > max)
    {
        max = number4;
    }
    if (number5 > max)
    {
        max = number5;
    }
    return max;
}

double calculate_min(double number1, double number2, double number3, double number4, double number5)    //if statements to find the min number
{

    double min = number1;
    
    if (number2 < min)
    {
        min = number2;
    }
    if (number3 < min)
    {
        min = number3;
    }
    if (number4 < min)
    {
        min = number4;
    }
    if (number5 < min)
    {
        min = number5;
    }
    return min;
    
}

   //end