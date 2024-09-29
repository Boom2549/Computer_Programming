#include <stdio.h>
void cutify(char *p);
int is_vowel(char c);
int is_lower(char c);

int main()
{
    char name[20];
    printf("Enter name : ");
    scanf("%[^\n]", &name);
    cutify(name);
    printf("Cutify name : %s", name);
}

int is_vowel(char c) {
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || 
        c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        return 1;
    return 0;
}
int is_lower(char c) {
    if (c>='a' && c<='z')
        return 1;
    return 0;
}
void cutify(char *p)
{
    while (*p != '\0')
    {
        if (is_vowel(*p))
            if (is_lower(*p))
                *p = 'i';
            else
                *p = 'I';
        p++;
    }
}