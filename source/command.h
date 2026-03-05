#include "sorting.h"
#include "sort_runtime.h"
#include <fstream>
#include <string>


using namespace std;


void GenerateData(int a[], int n, int dataType);

sortFunction select_sort_func(char* sort_name);

void print_sorting_algorithm(char* sort_name);

long long perform_count_comp(char* sort_name, int arr[], int n);

void output_param(char* param, char* sort_name, sortFunction sort_func, int n, int arr[]);

void do_command_1(int n, char* requirements[]);

void do_command_2(int n, char* requirements[]);

void do_command_3(int n, char* requirements[]);

void do_command_4(int n, char* requirements[]);

void do_command_5(int n, char* requirements[]);
