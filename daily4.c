/*
Author: Adam Warden
Date: 1/31/2022
Effort: 30 minutes
Purpose: This code adds two additional functions to daily 3, which use the left shift operator and the binary XOR operator
*/
#include <stdio.h>

void set_flag(unsigned int* flag_holder, int flag_position);
void unset_flag(unsigned int * flag_holder, int flag_position);
int check_flag(unsigned int flag_holder, int flag_position);
void display_32_flags(unsigned int flag_holder);

int main(int argc, char* argv[])
{
    unsigned int flag_holder = 0;
    set_flag(&flag_holder, 3);
    set_flag(&flag_holder, 16);
    set_flag(&flag_holder, 31);
    display_32_flags(flag_holder);
    unset_flag(&flag_holder, 31);
    unset_flag(&flag_holder, 3);
    set_flag(&flag_holder, 9);
    display_32_flags(flag_holder);
    return 0;
}

void set_flag(unsigned int* pFlag_holder, int flag_position) {
    *pFlag_holder = *pFlag_holder|(1 << flag_position);
}

int check_flag(unsigned int flag_holder, int flag_position) {
    return (flag_holder >> (flag_position)) & 1;
}

void unset_flag(unsigned int *flag_holder, int flag_position){
        *flag_holder = *flag_holder^(1<<flag_position);
}
    

void display_32_flags(unsigned int flag_holder){
    for(int i=31; i>=0; i--)
    {
    printf("%d", check_flag(flag_holder, i));
    if(i%4 == 0)
    {
    printf(" ");
    }
    }
    printf("\n");
}