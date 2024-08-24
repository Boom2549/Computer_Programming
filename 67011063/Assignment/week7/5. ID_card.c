#include <stdio.h>

void print_id_card(char name[], char job[], int age);

int main()
{
    char name[20], job[20];
    int age;
    printf("Enter name, age, job : ");
    scanf("%s %d %s", name, &age, job);
    printf("======================\n");
    print_id_card(name, job, age);
    return 0;
}

void print_id_card(char name[], char job[], int age) {
    printf("| %-19s|\n", name);
    printf("| ------------------ |\n");
    printf("| Age : %-13d|\n", age);
    printf("| Job : %-13s|\n", job);
    printf("======================\n");
}