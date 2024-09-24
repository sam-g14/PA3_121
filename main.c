/*
	
    Name: Samantha Garcia
	Date: 09/20/2024
	PA3

*/

#include "header.h"     //includes what i declared in theheader file

int main(void)      //start of program
{
	FILE* input = fopen("input.txt", "r");      //its gonna open and read file
	FILE* output = fopen("output.txt", "w");    //its going to open and be able to write

   

    int student_id;
    double gpa, class_standing, age;
    double sum_gpa = 0.0, sum_class_standing = 0.0, sum_age = 0.0;      //declarations and where we are starting at 0.0

    
    
    int student_id1 = read_integer(input);      //**********************************************
    double gpa1 = read_double(input);
    int class_standing1 = read_integer(input);
    double age1 = read_double(input);

    int student_id2 = read_integer(input);
    double gpa2 = read_double(input);
    int class_standing2 = read_integer(input);
    double age2 = read_double(input);

    int student_id3 = read_integer(input);
    double gpa3 = read_double(input);           //creating an identification for all 5 inputs or students
    int class_standing3 = read_integer(input);
    double age3 = read_double(input);

    int student_id4 = read_integer(input);
    double gpa4 = read_double(input);
    int class_standing4 = read_integer(input);
    double age4 = read_double(input);

    int student_id5 = read_integer(input);
    double gpa5 = read_double(input);
    int class_standing5 = read_integer(input);
    double age5 = read_double(input);           //******************************************************
    

    sum_gpa = calculate_sum(gpa1, gpa2, gpa3, gpa4, gpa5);
    sum_class_standing = calculate_sum(class_standing1, class_standing2, class_standing3, class_standing4, class_standing5);
    sum_age = calculate_sum(age1, age2, age3, age4, age5);      

            //calculations of sum gpa, their class standing, and age of all 5 inputs

    double mean_gpa = calculate_mean(sum_gpa, 5);
    double mean_class_standing = calculate_mean(sum_class_standing, 5);
    double mean_age = calculate_mean(sum_age, 5);

            //calculating the mean of gpa, class standing, age of all 5 inputs

    print_double(output, mean_gpa);
    print_double(output, mean_class_standing);
    print_double(output, mean_age);

            //printing the mean of gpa, class standing, and age

    double deviation1 = calculate_deviation(gpa1, mean_gpa);
    double deviation2 = calculate_deviation(gpa2, mean_gpa);
    double deviation3 = calculate_deviation(gpa3, mean_gpa);
    double deviation4 = calculate_deviation(gpa4, mean_gpa);
    double deviation5 = calculate_deviation(gpa5, mean_gpa);

            //calculating deviation of all 5 inputs
    
    double variance = calculate_variance(deviation1, deviation2, deviation3, deviation4, deviation5, 5);
    print_double(output, calculate_standard_deviation(variance));
    print_double(output, calculate_min(gpa1, gpa2, gpa3, gpa4, gpa5));
    print_double(output, calculate_max(gpa1, gpa2, gpa3, gpa4, gpa5));


            //printing the standard deviation, min and max


    fclose(input);
    fclose(output);     //close both files


	return 0;       //making sure the code ran successful
}
