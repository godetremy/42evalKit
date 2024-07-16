//
// Created by Rémy on 16/07/2024.
//

#include <stdio.h>
#include <string.h>

// EX00
#ifndef EX00
#define EX00 0
#endif
#if __has_include("ex00/ft_strcpy.c")
#include "ex00/ft_strcpy.c"
#undef EX00
#define EX00 1
#endif
#if EX00 == 0
char *ft_strcpy(char *dest, char *src) { return ""; }
#endif

// EX01
#ifndef EX01
#define EX01 0
#endif
#if __has_include("ex01/ft_strncpy.c")
#include "ex01/ft_strncpy.c"
#undef EX01
#define EX01 1
#endif
#if EX01 == 0
char *ft_strncpy(char *dest, char *src, unsigned int n) { return ""; }
#endif

// EX02
#ifndef EX02
#define EX02 0
#endif
#if __has_include("ex02/ft_str_is_alpha.c")
#include "ex02/ft_str_is_alpha.c"
#undef EX02
#define EX02 1
#endif
#if EX02 == 0
int ft_str_is_alpha(char *str)
{return 0;}
#endif

// EX03
#ifndef EX03
#define EX03 0
#endif
#if __has_include("ex03/ft_str_is_numeric.c")
#include "ex03/ft_str_is_numeric.c"
#undef EX03
#define EX03 1
#endif

// EX04
#ifndef EX04
#define EX04 0
#endif
#if __has_include("ex04/ft_str_is_lowercase.c")
#include "ex04/ft_str_is_lowercase.c"
#undef EX04
#define EX04 1
#endif

// EX05
#ifndef EX05
#define EX05 0
#endif
#if __has_include("ex05/ft_str_is_uppercase.c")
#include "ex05/ft_str_is_uppercase.c"
#undef EX05
#define EX05 1
#endif

// EX06
#ifndef EX06
#define EX06 0
#endif
#if __has_include("ex06/ft_str_is_printable.c")
#include "ex06/ft_str_is_printable.c"
#undef EX06
#define EX06 1
#endif
#if EX06 == 0
int ft_str_is_printable(char *str) { return 0; }
#endif

// EX07
#ifndef EX07
#define EX07 0
#endif
#if __has_include("ex07/ft_strupcase.c")
#include "ex07/ft_strupcase.c"
#undef EX07
#define EX07 1
#endif
#if EX07 == 0
char *ft_strupcase(char *str) { return ""; }
#endif

// EX08
#ifndef EX08
#define EX08 0
#endif
#if __has_include("ex08/ft_strlowcase.c")
#include "ex08/ft_strlowcase.c"
#undef EX08
#define EX08 1
#endif
#if EX08 == 0
char *ft_strlowcase(char *str) { return ""; }
#endif

// EX09
#ifndef EX09
#define EX09 0
#endif
#if __has_include("ex09/ft_strcapitalize.c")
#include "ex09/ft_strcapitalize.c"
#undef EX09
#define EX09 1
#endif
#if EX09 == 0
char *ft_strcapitalize(char *str) { return ""; }
#endif

// EX10
#ifndef EX10
#define EX10 0
#endif
#if __has_include("ex10/ft_strlcpy.c")
#include "ex10/ft_strlcpy.c"
#undef EX10
#define EX10 1
#endif
#if EX10 == 0
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) { return 0; }
#endif

// EX11
#ifndef EX11
#define EX11 0
#endif
#if __has_include("ex11/ft_putstr_non_printable.c")
#include "ex11/ft_putstr_non_printable.c"
#undef EX11
#define EX11 1
#endif
#if EX11 == 0
void ft_putstr_non_printable(char *str) {}
#endif

// EX12
#ifndef EX12
#define EX12 0
#endif
#if __has_include("ex12/ft_print_memory.c")
#include "ex12/ft_print_memory.c"
#undef EX12
#define EX12 1
#endif
#if EX12 == 0
void *ft_print_memory(void *addr, unsigned int size) { return ""; }
#endif

void try_ex00(char *test) {
    printf("│ Trying with \"%s\"\n│ \n", test);
    char dest1[50];
    char dest2[50];

    ft_strcpy(dest1, test);
    strcpy(dest2, test);
    printf("│ Your result : \n│ \033[34m\"%s\"\033[0m\n", dest1);
    printf("│ Waited result : \n│ \033[35m\"%s\"\033[0m\n", dest2);
    if (strcmp(dest1, dest2) == 0) {
        printf("│ \n│ \033[32m SUCCESS !\033[0m\n");
    } else {
        printf("│ \n│ \033[31m FAIL !\033[0m\n");
    }
}

void try_ex01(char *test, unsigned int n) {
    printf("│ Trying with \"%s\"\n│ \n", test);
    char dest1[50];
    char dest2[50];

    ft_strncpy(dest1, test, n);
    strncpy(dest2, test, n);
    printf("│ Your result : \n│ \033[34m\"%s\"\033[0m\n", dest1);
    printf("│ Waited result : \n│ \033[35m\"%s\"\033[0m\n", dest2);
    if (strcmp(dest1, dest2) == 0) {
        printf("│ \n│ \033[32m SUCCESS !\033[0m\n");
    } else {
        printf("│ \n│ \033[31m FAIL !\033[0m\n");
    }
}

void try_ex02(char *test, int waited) {
    printf("│ Trying with \"%s\"\n│ \n", test);
    int dest1;

    dest1 = ft_str_is_alpha(test);
    printf("│ Your result : \n│ \033[34m%d\033[0m\n", dest1);
    printf("│ Waited result : \n│ \033[35m%d\033[0m\n", waited);
    if (dest1 == waited) {
        printf("│ \n│ \033[32m SUCCESS !\033[0m\n");
    } else {
        printf("│ \n│ \033[31m FAIL !\033[0m\n");
    }
}

void try_ex03(char *test, int waited) {
    printf("│ Trying with \"%s\"\n│ \n", test);
    int dest1;

    dest1 = ft_str_is_numeric(test);
    printf("│ Your result : \n│ \033[34m%d\033[0m\n", dest1);
    printf("│ Waited result : \n│ \033[35m%d\033[0m\n", waited);
    if (dest1 == waited) {
        printf("│ \n│ \033[32m SUCCESS !\033[0m\n");
    } else {
        printf("│ \n│ \033[31m FAIL !\033[0m\n");
    }
}

void try_ex04(char *test, int waited) {
    printf("│ Trying with \"%s\"\n│ \n", test);
    int dest1;

    dest1 = ft_str_is_lowercase(test);
    printf("│ Your result : \n│ \033[34m%d\033[0m\n", dest1);
    printf("│ Waited result : \n│ \033[35m%d\033[0m\n", waited);
    if (dest1 == waited) {
        printf("│ \n│ \033[32m SUCCESS !\033[0m\n");
    } else {
        printf("│ \n│ \033[31m FAIL !\033[0m\n");
    }
}

void try_ex05(char *test, int waited) {
    printf("│ Trying with \"%s\"\n│ \n", test);
    int dest1;

    dest1 = ft_str_is_uppercase(test);
    printf("│ Your result : \n│ \033[34m%d\033[0m\n", dest1);
    printf("│ Waited result : \n│ \033[35m%d\033[0m\n", waited);
    if (dest1 == waited) {
        printf("│ \n│ \033[32m SUCCESS !\033[0m\n");
    } else {
        printf("│ \n│ \033[31m FAIL !\033[0m\n");
    }
}

void try_ex06(char *test, int waited) {
    printf("│ Trying with \"%s\"\n│ \n", test);
    int dest1;

    dest1 = ft_str_is_printable(test);
    printf("│ Your result : \n│ \033[34m%d\033[0m\n", dest1);
    printf("│ Waited result : \n│ \033[35m%d\033[0m\n", waited);
    if (dest1 == waited) {
        printf("│ \n│ \033[32m SUCCESS !\033[0m\n");
    } else {
        printf("│ \n│ \033[31m FAIL !\033[0m\n");
    }
}

void try_ex07(char *test, char *waited) {
    printf("│ Trying with \"%s\"\n│ \n", test);
    char dest1[50];

    ft_strupcase(dest1);
    printf("│ Your result : \n│ \033[34m\"%s\"\033[0m\n", dest1);
    printf("│ Waited result : \n│ \033[35m\"%s\"\033[0m\n", waited);
    if (strcmp(dest1, waited) == 0) {
        printf("│ \n│ \033[32m SUCCESS !\033[0m\n");
    } else {
        printf("│ \n│ \033[31m FAIL !\033[0m\n");
    }
}

void try_ex08(char *test, char *waited) {
    printf("│ Trying with \"%s\"\n│ \n", test);
    char dest1[50];

    ft_strlowcase(dest1);
    printf("│ Your result : \n│ \033[34m\"%s\"\033[0m\n", dest1);
    printf("│ Waited result : \n│ \033[35m\"%s\"\033[0m\n", waited);
    if (strcmp(dest1, waited) == 0) {
        printf("│ \n│ \033[32m SUCCESS !\033[0m\n");
    } else {
        printf("│ \n│ \033[31m FAIL !\033[0m\n");
    }
}

void try_ex09(char *test, char *waited) {
    printf("│ Trying with \"%s\"\n│ \n", test);
    char dest1[50];

    ft_strcapitalize(dest1);
    printf("│ Your result : \n│ \033[34m\"%s\"\033[0m\n", dest1);
    printf("│ Waited result : \n│ \033[35m\"%s\"\033[0m\n", waited);
    if (strcmp(dest1, waited) == 0) {
        printf("│ \n│ \033[32m SUCCESS !\033[0m\n");
    } else {
        printf("│ \n│ \033[31m FAIL !\033[0m\n");
    }
}

void try_ex10(char *test, unsigned int size, char *waited) {
    printf("│ Trying with \"%s\"\n│ \n", test);
    char dest1[50];

    ft_strlcpy(dest1, test, size);
    printf("│ Your result : \n│ \033[34m\"%s\"\033[0m\n", dest1);
    printf("│ Waited result : \n│ \033[35m\"%s\"\033[0m\n", waited);
    if (strcmp(dest1, waited) == 0) {
        printf("│ \n│ \033[32m SUCCESS !\033[0m\n");
    } else {
        printf("│ \n│ \033[31m FAIL !\033[0m\n");
    }
}

void log_norminette(const char *file_path) {
    char path[1035];
    FILE *nm = popen(file_path, "r");
    while (fgets(path, sizeof(path)-1, nm) != NULL) {
        if (strstr(path, "OK!") == NULL)
            printf("\033[31m");
        printf("  〉 %s", path);
        if (strstr(path, "OK!") == NULL)
            printf("\033[0m");
    }
}

int main() {
    char path[1035];
    printf("  ___             _  _  __ _  _   \n| __|__ __ __ _ | || |/ /(_)| |_ \n| _| \\ V // _` || || ' < | ||  _|\n|___| \\_/ \\__,_||_||_|\\_\\|_| \\__|\n\n");
    printf("—————————— ABOUT ——————————\n");
    printf("Evaluation    :         C02\n");
    printf("Revision      :       0.1.0\n\n");
    printf("—————————— FILES ——————————\n");
    FILE *fp = popen("git ls-files", "r");
    while (fgets(path, sizeof(path)-1, fp) != NULL) {
        printf(" - %s", path);
    }
    printf("\n————————— COMMIT ——————————\n");
    FILE *gc = popen("git log --pretty=format:\"%h - %an, %ar : %s\"", "r");
    while (fgets(path, sizeof(path)-1, gc) != NULL) {
        printf("%s", path);
    }
    printf("\n\n——————— NORMINETTE ————————\n");
    log_norminette("norminette ex00/ft_strcpy.c");
    log_norminette("norminette ex01/ft_strncpy.c");
    log_norminette("norminette ex02/ft_str_is_alpha.c");
    log_norminette("norminette ex03/ft_str_is_numeric.c");
    log_norminette("norminette ex04/ft_str_is_lowercase.c");
    log_norminette("norminette ex05/ft_str_is_uppercase.c");
    log_norminette("norminette ex06/ft_str_is_printable.c");
    log_norminette("norminette ex07/ft_strupcase.c");
    log_norminette("norminette ex08/ft_strlowcase.c");
    log_norminette("norminette ex09/ft_strcapitalize.c");
    log_norminette("norminette ex10/ft_strlcpy.c");
    log_norminette("norminette ex11/ft_putstr_non_printable.c");
    log_norminette("norminette ex12/ft_print_memory.c");
    printf("\n—————————— TEST ———————————\n");
    printf("┌─── ex00\n");
    printf("├─ test00\n");
    if(EX00 == 0) {
        printf("│ \033[31mft_strcpy.c is not found ! \033[0m\n");
    } else {
        try_ex00("Hello world");
    }
    printf("├─ test01\n");
    if(EX00 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex00("");
    }
    printf("├─ test02\n");
    if(EX00 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex00("This is a longer string test.");
    }
    printf("├─ test03\n");
    if(EX00 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex00("\10 This string contain \1 too much \t symbol.");
    }
    printf("└────────\n");
    printf("┌─── ex01\n");
    printf("├─ test00\n");
    if(EX01 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex01("Hello world", 5);
    }
    printf("├─ test01\n");
    if(EX01 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex01("", 2);
    }
    printf("├─ test02\n");
    if(EX01 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex01("This is a longer string test.", 0);
    }
    printf("├─ test03\n");
    if(EX01 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex01("\10 This string contain \1 too much \t symbol.", 32);
    }
    printf("└────────\n");
    printf("┌─── ex02\n");
    printf("├─ test00\n");
    if(EX02 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex02("Hello world", 0);
    }
    printf("├─ test01\n");
    if(EX02 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex02("", 1);
    }
    printf("├─ test02\n");
    if(EX02 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex02("42school", 0);
    }
    printf("├─ test03\n");
    if(EX02 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex02("TooMuchLongText", 1);
    }
    printf("└────────\n");
    printf("┌─── ex03\n");
    printf("├─ test00\n");
    if(EX03 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex03("Hello world", 0);
    }
    printf("├─ test01\n");
    if(EX03 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex03("", 1);
    }
    printf("├─ test02\n");
    if(EX03 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex03("42", 1);
    }
    printf("├─ test03\n");
    if(EX03 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex03("TooMuchLongText", 0);
    }
    printf("└────────\n");
    printf("┌─── ex04\n");
    printf("├─ test00\n");
    if(EX04 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex04("Hello world", 0);
    }
    printf("├─ test01\n");
    if(EX04 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex04("", 1);
    }
    printf("├─ test02\n");
    if(EX04 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex04("42", 0);
    }
    printf("├─ test03\n");
    if(EX04 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex04("toomuchlongtext", 1);
    }
    printf("└────────\n");
    printf("┌─── ex05\n");
    printf("├─ test00\n");
    if(EX05 == 0) {
        printf("│ \033[31mft_strcpy.c is not found ! \033[0m\n");
    } else {
        try_ex05("HELLO WORLD", 0);
    }
    printf("├─ test01\n");
    if(EX05 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex05("", 1);
    }
    printf("├─ test02\n");
    if(EX05 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex05("42", 0);
    }
    printf("├─ test03\n");
    if(EX05 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex05("TOOMUCHLONGTEXT", 1);
    }
    printf("└────────\n");
    printf("┌─── ex06\n");
    printf("├─ test00\n");
    if(EX06 == 0) {
        printf("│ \033[31mft_strcpy.c is not found ! \033[0m\n");
    } else {
        try_ex06("Hello world", 1);
    }
    printf("├─ test01\n");
    if(EX06 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex06("", 1);
    }
    printf("├─ test02\n");
    if(EX06 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex06("42", 1);
    }
    printf("├─ test03\n");
    if(EX06 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex06("\1Hello", 0);
    }
    printf("└────────\n");
    printf("┌─── ex07\n");
    printf("├─ test00\n");
    if(EX07 == 0) {
        printf("│ \033[31mft_strcpy.c is not found ! \033[0m\n");
    } else {
        try_ex07("Hello world", "HELLO WORLD");
    }
    printf("├─ test01\n");
    if(EX07 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex07("", "");
    }
    printf("├─ test02\n");
    if(EX07 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex07("42", "42");
    }
    printf("├─ test03\n");
    if(EX07 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex07("\1Hello", "\1HELLO");
    }
    printf("└────────\n");
    printf("┌─── ex08\n");
    printf("├─ test00\n");
    if(EX08 == 0) {
        printf("│ \033[31mft_strcpy.c is not found ! \033[0m\n");
    } else {
        try_ex08("Hello world", "hello world");
    }
    printf("├─ test01\n");
    if(EX08 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex08("", "");
    }
    printf("├─ test02\n");
    if(EX08 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex08("42", "42");
    }
    printf("├─ test03\n");
    if(EX08 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex08("\1Hello", "\1hello");
    }
    printf("└────────\n");
    printf("┌─── ex09\n");
    printf("├─ test00\n");
    if(EX09 == 0) {
        printf("│ \033[31mft_strcpy.c is not found ! \033[0m\n");
    } else {
        try_ex09("Hello world", "Hello World");
    }
    printf("├─ test01\n");
    if(EX09 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex09("", "");
    }
    printf("├─ test02\n");
    if(EX09 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex09("42", "42");
    }
    printf("├─ test03\n");
    if(EX09 == 0) {
        printf("│ \033[31mFile is not found ! \033[0m\n");
    } else {
        try_ex09("salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un", "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un");
    }
    printf("└────────\n");
    printf("┌─── ex10\n");
    printf("│ \033[33mThis file can't be tested with this program.\033[0m\n");
    printf("└────────\n");
    printf("┌─── ex11\n");
    printf("│ \033[33mThis file can't be tested with this program.\033[0m\n");
    printf("└────────\n");
    printf("┌─── ex12\n");
    printf("│ \033[33mThis file can't be tested with this program.\033[0m\n");
    printf("└────────\n");
}