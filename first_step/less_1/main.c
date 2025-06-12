#include <stdio.h>

void enter()
{
    char name[50] = "";

    printf("welcome!\nplease, enter your system name: ");
    scanf("%s", name);
    
    printf("... come in, dear %s\n", name);
}

void var_set()
{
    int i_var = 19;
    char c_var = 'h';
    float f_var = 39.171f;

    printf("int   | %d | %d | %x\n", i_var, sizeof(i_var), i_var);
    printf("char  | %c | %d | %x\n", c_var, sizeof(c_var), c_var);
    printf("float | %f | %d | %x\n", f_var, sizeof(f_var), f_var);
}

int main(void)
{
    //enter();
    var_set();

    return 0;
}